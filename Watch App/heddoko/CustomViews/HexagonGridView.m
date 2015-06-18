//
//  HexagonGridView.m
//  heddoko
//
//  Created by Antoine Azar on 2014-12-03.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import "HexagonGridView.h"
#import "HexagonElementView.h"

@implementation HexagonGridView

- (void)setupWithDelegate:(id)delegate oddOrder:(BOOL)oddOrder
{
    self.oddOrder = oddOrder;
    UIImage* hexagon = [UIImage imageNamed:@"Hexagon"];
    NSUInteger width = hexagon.size.width+2;
    NSUInteger height = hexagon.size.height+3;

    hexagonGrid = [[NSMutableDictionary alloc] initWithCapacity:8*2];

    for(int y=0; y<8; y++)
    {
        for(int x=0; x<2; x++)
        {
            if(self.layoutArray.map[y][x]>0)
            {
                NSInteger xPos = 0;
                if((y%2==0 && oddOrder==NO) || (y%2==1 && oddOrder==YES))
                {
                    xPos = 60+188*x;
                }
                else
                {
                    xPos = -34+188*x;
                }
                NSInteger yPos = height/2.f*y;

                HexagonElementView* hev = [[HexagonElementView alloc] initWithFrame:CGRectMake(xPos, yPos, width, height)];
                hev.delegate = delegate;
                hev.x = x;
                hev.y = y;
                [hexagonGrid setValue:hev forKey:[NSString stringWithFormat:@"%d,%d", x, y]];
                [self addSubview:hev];
            }
        }
    }
}

- (void)prepare
{
    NSArray *keyArray =  [hexagonGrid allKeys];
    NSUInteger count = [keyArray count];
    for (int i=0; i < count; i++) {
        HexagonElementView* hex= [hexagonGrid objectForKey:[keyArray objectAtIndex:i]];
        [hex prepare];
    }
}

- (void)appear
{
    float delay = 0.f;
    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 2; x++) {
            NSString *key = [NSString stringWithFormat:@"%d,%d", x, y];
            HexagonElementView *hex = [hexagonGrid objectForKey:key];
            if (hex != nil) {
                [hex appearWithDelay:delay];
                delay += 0.08;
            }
        }
    }
}

- (void)disappear
{
    float delay = 0.f;
    for (int y = 7; y >= 0; y--) {
        for (int x = 1; x >= 0; x--) {
            NSString *key = [NSString stringWithFormat:@"%d,%d", x, y];
            HexagonElementView *hex = [hexagonGrid objectForKey:key];
            if (hex != nil) {
                [hex disappearWithDelay:delay];
                delay += 0.03;
            }
        }
    }
}

- (HexagonElementView*)getElementAtKey:(NSString*)key
{
    return [hexagonGrid objectForKey:key];
}

- (void)rearrange
{
    float delay = 0.f;
    for (int y = 7; y >= 0; y--) {
        for (int x = 1; x >= 0; x--) {
            NSString *key = [NSString stringWithFormat:@"%d,%d", x, y];
            HexagonElementView *hex = [hexagonGrid objectForKey:key];
            if (hex != nil && !(x == 0 && y == 0)) {
                [hex disappearWithDelay:delay];
                delay += 0.03;
            }
        }
    }
    [self performSelector:@selector(appear) withObject:nil afterDelay:0.4f];
}

@end
