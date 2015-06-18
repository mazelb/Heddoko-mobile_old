//
//  PreTrainingInterfaceController.m
//  Unity-iPhone
//
//  Created by Guillaume Boudreau on 2015-05-05.
//
//

#import "PreTrainingInterfaceController.h"

@interface PreTrainingInterfaceController ()

@end

@implementation PreTrainingInterfaceController

- (void)awakeWithContext:(id)context {
    [super awakeWithContext:context];
    
    // Configure interface objects here.
}

- (void)willActivate {
    // This method is called when watch view controller is about to be visible to user
    [super willActivate];
    [self.trainButton setTitle:@"TRAIN"];
    [self.trainButton setEnabled:YES];
}

- (void)didDeactivate {
    // This method is called when watch view controller is no longer visible
    [super didDeactivate];
}

- (IBAction)trainButtonTouched {
    NSDictionary *userInfo = @{ @"action": @"train" };
    [self.trainButton setTitle:@"..."];
    [self.trainButton setEnabled:NO];
    [WKInterfaceController openParentApplication:userInfo reply:^(NSDictionary *replyInfo, NSError *error) {
        [self pushControllerWithName:@"TrainingController" context:nil];
    }];
}

@end



