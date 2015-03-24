//
//  RecordingData.h
//  Unity-iPhone
//
//  Created by Miguel Garcia Hernandez on 23-12-14.
//
//

#import <Foundation/Foundation.h>

@interface RecordingData : NSObject
{
    NSMutableArray* _keyFrames;
}

@property (nonatomic, retain) NSArray *frameData;

- (float)compareRecordingAccuracy:(RecordingData *)anotherRecording;

- (void)setKeyFrame:(NSNumber *)frameIndex;

- (NSArray *)keyFrames;

@end
