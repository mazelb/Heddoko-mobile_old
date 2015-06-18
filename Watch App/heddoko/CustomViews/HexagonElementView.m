//
//  HexagonElementView.m
//  heddoko
//
//  Created by Antoine Azar on 2014-12-03.
//  Copyright (c) 2014 Mobilogie. All rights reserved.
//

#import "HexagonElementView.h"

@implementation HexagonElementView

@synthesize x, y;

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        button = nil;
        self.backgroundColor = [UIColor clearColor];
        self.alpha = 0.f;
        isSetup = NO;
    }
    return self;
}

-(void) setup
{
    if(!isSetup)
    {
        UIImage *hexagon = nil;
        if(button)
            hexagon = [UIImage imageNamed:@"HexagonActive"];
        else
            hexagon = [UIImage imageNamed:@"Hexagon"];

        UIImageView* hexView = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, hexagon.size.width, hexagon.size.height)];
        hexView.image = hexagon;
        [self insertSubview:hexView atIndex:0];
    }
    isSetup = YES;
}

-(void) prepare
{
    self.alpha = 0.f;
    self.transform = CGAffineTransformScale(CGAffineTransformIdentity, 0.4, 0.4);
}

- (void)appear
{
    [self appearWithDelay:-1.f];
}

-(void) disappear
{
    [self disappearWithDelay:-1.f];
}

-(void) setButtonIcon:(UIImage*)image
{
    button = [[UIButton alloc] initWithFrame:CGRectMake(0, 0, self.frame.size.width, self.frame.size.height)];
    button.tag = self.tag;
    [button setImage:image forState:UIControlStateNormal];
    [button addTarget:self.delegate
               action:@selector(hexagonHit:)
     forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:button];

}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {

//  CGContextRef context = UIGraphicsGetCurrentContext();
    UIImage *hexagon = [UIImage imageNamed:@"Hexagon"];
    [hexagon drawAtPoint:CGPointMake(0, 0)];
}
*/

- (void) appearWithDelay:(float)delay
{
    if(!isSetup) {
        [self setup];
    }
    if (delay < 0) {
        delay = (float)rand()/RAND_MAX*0.4;
    }
    [UIView animateWithDuration:0.2
                          delay:(float)delay
                        options: UIViewAnimationOptionCurveEaseOut
                     animations:^{
                         if(button) {
                             self.alpha = 1.f;
                         }
                         else {
                             self.alpha = 0.35;
                         }
                         self.transform = CGAffineTransformScale(CGAffineTransformIdentity, 1, 1);
                     }
                     completion:^(BOOL finished){
                     }];
}

- (void) disappearWithDelay:(float)delay {
    
    if (delay < 0) {
        delay = (float)rand()/RAND_MAX*0.4;
    }
    
    [UIView animateWithDuration:0.2
                          delay:delay
                        options: UIViewAnimationOptionCurveEaseIn
                     animations:^{
                         self.alpha = 0.0;
                         self.transform = CGAffineTransformScale(CGAffineTransformIdentity, 0.4, 0.4);
                     }
                     completion:^(BOOL finished){
                     }];
}

- (NSString *) description
{
    NSString *description = [NSString stringWithFormat:@"HexagonElement: [%i,%i]", (int)[self x], (int)[self y]];
    return description;
}

@end
