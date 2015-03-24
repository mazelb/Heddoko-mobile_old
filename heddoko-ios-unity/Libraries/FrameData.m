//
//  FrameData.m
//  Unity-iPhone
//
//  Created by Miguel Garcia Hernandez on 23-12-14.
//
//

#import "FrameData.h"

@implementation FrameData

@synthesize positionArray;

- (float)compareFrameAccuracy:(FrameData *)anotherFrame
{
    NSLog(@"Compare Frame Accuracy...");
    int totalSensors = [positionArray count];
    float totalPositionAccuracy = 0.f;
    
    for (int i = 0; i < totalSensors; i++) {
        PositionData* baseData = (PositionData *) [positionArray objectAtIndex:i];
        PositionData* anotherData = (PositionData *) [[anotherFrame positionArray] objectAtIndex:i];
        
        totalPositionAccuracy += [baseData comparePositionAccuracy:anotherData];
    }
    
    float frameAccuracy = totalPositionAccuracy / totalSensors;
    
    NSLog(@"[Average Frame Accuracy: %f]", frameAccuracy);
    return frameAccuracy;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"Frame Data: [Total Devices: %i] \n%@", [positionArray count], positionArray];
}
@end
