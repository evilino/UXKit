//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//



@class NSGestureRecognizer;

@protocol NSGestureRecognizerDelegate <NSObject>

@optional
- (BOOL)gestureRecognizer:(NSGestureRecognizer *)arg1 shouldBeRequiredToFailByGestureRecognizer:(NSGestureRecognizer *)arg2;
- (BOOL)gestureRecognizer:(NSGestureRecognizer *)arg1 shouldRequireFailureOfGestureRecognizer:(NSGestureRecognizer *)arg2;
- (BOOL)gestureRecognizer:(NSGestureRecognizer *)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(NSGestureRecognizer *)arg2;
- (BOOL)gestureRecognizerShouldBegin:(NSGestureRecognizer *)arg1;
@end

