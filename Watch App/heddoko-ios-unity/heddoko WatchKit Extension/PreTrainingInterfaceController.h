//
//  PreTrainingInterfaceController.h
//  Unity-iPhone
//
//  Created by Guillaume Boudreau on 2015-05-05.
//
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@interface PreTrainingInterfaceController : WKInterfaceController

- (IBAction)trainButtonTouched;
@property (weak, nonatomic) IBOutlet WKInterfaceButton *trainButton;

@end
