//
//  UnityMovementData.m
//  Unity-iPhone
//
//  Created by Miguel Garcia Hernandez on 22-12-14.
//
//

#import "UnityMovementData.h"
#import "RecordingData.h"
#import "FrameData.h"
#import "PositionData.h"

const char* BASE_MOVEMENT = "Reference";
const char* RECORDED_MOVEMENT = "Recorded";

extern "C" {
    
    UnityMovementData* _unityMovementData = [[UnityMovementData alloc] init];
    
    void _iOSUnityMovementDataTestString (char* data)
    {
        [_unityMovementData testString:[NSString stringWithFormat:@"%s", data]];
    }
    
    void _iOSUnityMovementDataSendData (char* movementId, float rawData[], int dataSize, int frames, int devices)
    {
        if (strcmp(BASE_MOVEMENT, movementId) == 0) {
            [_unityMovementData setBaseMovementData:rawData dataSize:dataSize withFrames:frames andDevices:devices];
        }
        if (strcmp(RECORDED_MOVEMENT, movementId) == 0) {
            [_unityMovementData setRecordedData:rawData dataSize:dataSize withFrames:frames andDevices:devices];
        }
    }
}

@implementation UnityMovementData
{
    RecordingData* _baseRecording;
    RecordingData* _actualRecording;
}

+ (CGFloat)compareRecordingAccuracy {
    if (_unityMovementData.recordedData && _unityMovementData.baseMovementData) {
        return [_unityMovementData.baseMovementData compareRecordingAccuracy:_unityMovementData.recordedData];
    }
    return 0.f;
}

- (void)testString:(NSString *)data
{
    NSLog(@"UnityMovementData : Data String : %@", data);
}

- (RecordingData*)recordedData {
    return _actualRecording;
}

- (RecordingData*)baseMovementData {
    return _baseRecording;
}

- (void)setBaseMovementData:(float [])data dataSize:(int)dataSize withFrames:(int)frame andDevices:(int)devices
{
    NSLog(@"[ Received Base Movement Data ]");
    _baseRecording = [self transformRecordedData:data dataSize:dataSize withFrames:frame andDevices:devices];
    /* This was used to test the accuracy calculation, when no sensors were available
    if (!_actualRecording) {
        // Hopefully, this will be overwritten, but when we have no sensors, that should result in a 100% accuracy reading.
        NSLog(@"[ Using Base Movement as fake Recorded Data ; will be overwritten if we receive a real recording later ]");
        _actualRecording = [self transformRecordedData:data dataSize:dataSize withFrames:frame andDevices:devices];
    }
    */
}

- (void)setRecordedData:(float[])data dataSize:(int)dataSize withFrames:(int) frame andDevices:(int) devices;
{
    NSLog(@"[ Received Real Recorded Data ]");
    _actualRecording = [self transformRecordedData:data dataSize:dataSize withFrames:frame andDevices:devices];
}

- (RecordingData *)transformRecordedData:(float [])data dataSize:(int)dataSize withFrames:(int)frames andDevices:(int)devices
{
    RecordingData* resultData = nil;
    
    NSLog(@"dataSize: %i", dataSize);
    NSLog(@"frames: %i", frames);
    NSLog(@"devices: %i", devices);
    
    resultData = [[RecordingData alloc] init];
    NSMutableArray* frameArray = [[NSMutableArray alloc] init];
    int arrayIdx = 0;
    
    if ((frames * devices * 3) == dataSize) {
        
        for (int i = 0; i < frames; i++) {
            
            NSMutableArray* positionArray = [[NSMutableArray alloc] init];
            for (int j = 0; j < devices; j++) {
                
                PositionData* pData = [[PositionData alloc] init];
                [pData setYaw:data[arrayIdx++]];
                [pData setPitch:data[arrayIdx++]];
                [pData setRoll:data[arrayIdx++]];
                
                [positionArray addObject:pData];
            }
            
            FrameData* frameData = [[FrameData alloc] init];
            [frameData setPositionArray:[NSArray arrayWithArray:positionArray]];
            [frameArray addObject:frameData];
        }
        [resultData setFrameData:[NSArray arrayWithArray:frameArray]];
        //NSLog(@"%@", resultData);
        
    } else {
        NSLog(@"ERROR: Data size does not = number of frames X number of devices X 3");
    }
    
    return resultData;
}
@end

