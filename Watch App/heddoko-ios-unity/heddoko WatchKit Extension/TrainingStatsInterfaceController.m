//
//  TrainingStatsInterfaceController.m
//  Unity-iPhone
//
//  Created by Guillaume Boudreau on 2015-05-05.
//
//

#import "TrainingStatsInterfaceController.h"

@interface TrainingStatsInterfaceController ()

@end

@implementation TrainingStatsInterfaceController

- (void)awakeWithContext:(id)context {
    [super awakeWithContext:context];
    
    // Configure interface objects here.
    if (context && [context isKindOfClass:NSDictionary.class]) {
        [self.accuracyLabel setText:[NSString stringWithFormat:@"%d%%", [[context objectForKey:@"accuracy"] integerValue]]];
    } else {
        NSDictionary *userInfo = @{ @"action": @"analyze" };
        [WKInterfaceController openParentApplication:userInfo reply:^(NSDictionary *replyInfo, NSError *error) {
            if (replyInfo && [replyInfo objectForKey:@"accuracy"] && [[replyInfo objectForKey:@"accuracy"] integerValue] >= 0) {
                [self.accuracyLabel setText:[NSString stringWithFormat:@"%d%%", [[replyInfo objectForKey:@"accuracy"] integerValue]]];
            } else {
                [self.accuracyLabel setText:@"N/A"];
            }
        }];
    }
}

- (void)willActivate {
    // This method is called when watch view controller is about to be visible to user
    [super willActivate];
}

- (void)didDeactivate {
    // This method is called when watch view controller is no longer visible
    [super didDeactivate];
}

- (IBAction)doneButtonTouched {
    [self popToRootController];
}

@end



