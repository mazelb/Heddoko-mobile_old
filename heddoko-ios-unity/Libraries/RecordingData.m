//
//  RecordingData.m
//  Unity-iPhone
//
//  Created by Miguel Garcia Hernandez on 23-12-14.
//
//

#import "RecordingData.h"
#import "FrameData.h"

const int FRAME_WINDOW = 10;

@implementation RecordingData

@synthesize frameData;

- (id)init
{
    [super init];
    if (self) {
        _keyFrames = [[NSMutableArray alloc] init];
    }
    return self;
}

- (float)compareRecordingAccuracy:(RecordingData *)anotherRecording
{
    NSLog(@"Comparing Recording Accuracy...");
    
    int keyFrameIndex = 0; // Key should be passed as a parameter.
    FrameData* keyBaseFrame = [frameData objectAtIndex:keyFrameIndex];
    
    NSMutableArray* accuracyArray = [[NSMutableArray alloc] init];
    
    NSArray* allFrames = [anotherRecording frameData];
    NSArray* frameSubset = [self getFrameSubset:allFrames fromKeyIndex:[NSNumber numberWithInt:keyFrameIndex]];
    
    for (int i = 0; i < [frameSubset count]; i++) {
        FrameData* aFrame = (FrameData*) [frameSubset objectAtIndex:i];
        
        float accuracyByFrame = [keyBaseFrame compareFrameAccuracy:aFrame];
        [accuracyArray addObject:[NSNumber numberWithFloat:accuracyByFrame]];
    }
    
    NSLog(@"[Recording Accuracy Array: %@]", accuracyArray);
    
    float bestScore = 0;
    int index = 0;
    for (int i = 0; i < [accuracyArray count]; i++) {
        if ([[accuracyArray objectAtIndex:i] floatValue] >= bestScore) {
            bestScore = [[accuracyArray objectAtIndex:i] floatValue];
            index = i;
        }
    }
    
    NSLog(@"[Best Accuracy Value: %f, at Index %i]", bestScore, index);
    return bestScore;
}

- (void)setKeyFrame:(NSNumber *)frameIndex
{
    if (_keyFrames == nil) {
        _keyFrames = [[NSMutableArray alloc] init];
    }
    [_keyFrames addObject:frameIndex];
}

- (NSArray *)keyFrames
{
    return [NSArray arrayWithArray:_keyFrames];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"Movement Data: [Total Frames: %i] \n%@", [frameData count], frameData];
}

- (NSArray *)getFrameSubset:(NSArray *)frameArray fromKeyIndex:(NSNumber *) keyIndex
{
    int size = [frameArray count];
    int minIndex = 0;
    int maxIndex = size - 1;
    
    if (FRAME_WINDOW < [keyIndex intValue]) {
        minIndex = [keyIndex intValue] - FRAME_WINDOW;
    }
    
    if (FRAME_WINDOW <= (size - [keyIndex intValue])) {
        maxIndex = [keyIndex intValue] + FRAME_WINDOW;
    }
    
    NSLog(@"Subs Frame: [Fame Window: %i][Array Size: %i][minIndex: %i][maxIndex: %i][", FRAME_WINDOW, size, minIndex, maxIndex);
    return [frameArray subarrayWithRange:NSMakeRange(minIndex, (maxIndex-minIndex) + 1)];
}
@end
