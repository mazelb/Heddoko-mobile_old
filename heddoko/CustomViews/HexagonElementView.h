//
//  HexagonElementView.h
//  heddoko
//
//  Created by Antoine Azar on 2014-12-03.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HexagonElementView : UIView
{
    UIButton* button;
    BOOL isSetup;
}

@property (nonatomic) NSUInteger x;

@property (nonatomic) NSUInteger y;

@property (nonatomic, retain) id delegate;

- (void)appear;

- (void)disappear;

- (void)prepare;

- (void)setButtonIcon:(UIImage*)image;

- (void)appearWithDelay: (float)delay;

- (void)disappearWithDelay: (float)delay;

@end
