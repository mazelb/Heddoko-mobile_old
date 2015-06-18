//
//  ExercisesInterfaceController.m
//  Unity-iPhone
//
//  Created by Guillaume Boudreau on 2015-05-05.
//
//

#import "ExercisesInterfaceController.h"
#import "HKButtonRowController.h"

@interface ExercisesInterfaceController ()

@end

@implementation ExercisesInterfaceController

- (void)awakeWithContext:(id)context {
    [super awakeWithContext:context];
    
    // Configure interface objects here.
    [self loadTable];
}

- (void)willActivate {
    // This method is called when watch view controller is about to be visible to user
    [super willActivate];
}

- (void)loadTable {
    NSArray* items = @[
                       @{@"image": @"exercises-button-1", @"label": @"SQUAT"},
                       @{@"image": @"exercises-button-2", @"label": @"PUSH UPS"},
                       @{@"image": @"exercises-button-3", @"label": @"STRETCH"},
                       @{@"image": @"exercises-button-4", @"label": @"WEIGHT LIFTING"},
                       ];
    [self.myTable setNumberOfRows:items.count withRowType:@"ExerciseButton"];
    NSInteger rowCount = self.myTable.numberOfRows;
    for (NSInteger i = 0; i < rowCount; i++) {
        NSDictionary* item = items[i];
        HKButtonRowController* row = [self.myTable rowControllerAtIndex:i];
        [row.buttonLabel setText:[item objectForKey:@"label"]];
        [row.buttonImage setImage:[UIImage imageNamed:[item objectForKey:@"image"]]];
    }
}

- (void)didDeactivate {
    // This method is called when watch view controller is no longer visible
    [super didDeactivate];
}

@end
