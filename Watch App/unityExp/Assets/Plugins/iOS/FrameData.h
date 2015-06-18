//
//  FrameData.h
//  Unity-iPhone
//
//  Created by Miguel Garcia Hernandez on 23-12-14.
//
//

#import <Foundation/Foundation.h>
#import "PositionData.h"

@interface FrameData : NSObject

@property (nonatomic, retain) NSArray* positionArray;

- (float)compareFrameAccuracy:(FrameData *)anotherFrame;

@end
