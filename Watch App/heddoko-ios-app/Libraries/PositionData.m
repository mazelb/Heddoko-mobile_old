//
//  PositionData.m
//  Unity-iPhone
//
//  Created by Miguel Garcia Hernandez on 23-12-14.
//
//

#import "PositionData.h"

@implementation PositionData

@synthesize yaw, pitch, roll;

- (float)comparePositionAccuracy:(PositionData *)anotherPosition
{
    NSLog(@"Position Accuracy...");
    float yawDiff = fabsf([anotherPosition yaw] - [self yaw]);
    float yawAccuracy = MAX(0.f, (1 - (yawDiff / (M_PI/6))) );
    
    float pitchDiff = fabsf([anotherPosition pitch] - [self pitch]);
    float pitchAccuracy = MAX(0.f,  1 - (pitchDiff / (M_PI/6)) );
    
    float rollDiff = fabsf([anotherPosition roll] - [self roll]);
    float rollAccuracy = MAX(0.f,  1 - (rollDiff / (M_PI/6)) );
    
    NSLog(@"[Yaw Accuracy: %f][Pitch Accuracy: %f][Roll Accuracy: %f]", yawAccuracy, pitchAccuracy, rollAccuracy);

    float totalAcuracy = (yawAccuracy + pitchAccuracy + rollAccuracy) / 3;
    NSLog(@"[Position Total Accuracy: %f]", totalAcuracy);
    
    return totalAcuracy;
}

- (NSString *)description
{
    NSString* str = [NSString stringWithFormat:@"Position: [yawn: %f][pitch: %f][roll: %f]", [self yaw], [self pitch], [self roll]];
    return str;
}

@end
