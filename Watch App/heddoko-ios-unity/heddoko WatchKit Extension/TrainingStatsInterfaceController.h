//
//  TrainingStatsInterfaceController.h
//  Unity-iPhone
//
//  Created by Guillaume Boudreau on 2015-05-05.
//
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@interface TrainingStatsInterfaceController : WKInterfaceController

- (IBAction)doneButtonTouched;

@property (weak, nonatomic) IBOutlet WKInterfaceLabel *accuracyLabel;

@end
