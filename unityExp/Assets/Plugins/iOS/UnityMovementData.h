//
//  UnityMovementData.h
//  Unity-iPhone
//
//  Created by Miguel Garcia Hernandez on 22-12-14.
//
//

#import <Foundation/Foundation.h>

@interface UnityMovementData : NSObject

- (void)testString:(NSString *)data;

- (void)setBaseMovementData:(float[])data dataSize:(int)dataSize withFrames:(int) frame andDevices:(int) devices;

- (void)setRecordedData:(float[])data dataSize:(int)dataSize withFrames:(int) frame andDevices:(int) devices;

+ (CGFloat)compareRecordingAccuracy;

@end
