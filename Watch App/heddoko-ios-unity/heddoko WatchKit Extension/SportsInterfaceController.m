//
//  ExercisesInterfaceController.m
//  heddoko WatchKit Extension
//
//  Created by Guillaume Boudreau on 2015-05-04.
//
//

#import "SportsInterfaceController.h"
#import "HKButtonRowController.h"

@interface SportsInterfaceController()

@end


@implementation SportsInterfaceController

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
                       @{@"image": @"home-button-1", @"label": @"CROSS TRAINING"},
                       @{@"image": @"home-button-2", @"label": @"GOLF"},
                       @{@"image": @"home-button-3", @"label": @"BASKETBALL"},
                       @{@"image": @"home-button-4", @"label": @"YOGA"},
                       ];
    [self.myTable setNumberOfRows:items.count withRowType:@"SportButton"];
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



