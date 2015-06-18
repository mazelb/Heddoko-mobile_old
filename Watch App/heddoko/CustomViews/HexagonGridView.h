//
//  HexagonGridView.h
//  heddoko
//
//  Created by Antoine Azar on 2014-12-03.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import <UIKit/UIKit.h>

struct layout {
    int map[8][2];
};

typedef struct layout layout;

@class HexagonElementView;

@interface HexagonGridView : UIView
{
    NSMutableDictionary* hexagonGrid;
}

@property (nonatomic, readwrite) layout layoutArray;

@property (nonatomic, readwrite) BOOL oddOrder;


- (void) appear;

- (void) disappear;

- (void) prepare;

- (void) setupWithDelegate:(id)delegate oddOrder:(BOOL)oddOrder;

- (HexagonElementView*) getElementAtKey:(NSString*)key;

- (void) rearrange;

@end
