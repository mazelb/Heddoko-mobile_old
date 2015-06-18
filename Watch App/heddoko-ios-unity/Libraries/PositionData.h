//
//  PositionData.h
//  Unity-iPhone
//
//  Created by Miguel Garcia Hernandez on 23-12-14.
//
//

#import <Foundation/Foundation.h>

@interface PositionData : NSObject

@property float yaw;

@property float pitch;

@property float roll;

- (float)comparePositionAccuracy:(PositionData *)anotherPosition;

@end
