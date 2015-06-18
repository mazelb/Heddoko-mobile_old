//
//  HKButtonRowController.h
//  Unity-iPhone
//
//  Created by Guillaume Boudreau on 2015-05-04.
//
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@interface HKButtonRowController : NSObject

@property (weak, nonatomic) IBOutlet WKInterfaceImage* buttonImage;
@property (weak, nonatomic) IBOutlet WKInterfaceLabel* buttonLabel;

@end
