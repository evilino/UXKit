//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@import  AppKit;

@class NSColor;

@interface NSProgressIndicator (Compatibility)
- (BOOL)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
@property(retain, nonatomic) NSColor *color;
@property(nonatomic) BOOL hidesWhenStopped;
@property(nonatomic) long long activityIndicatorViewStyle;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2;
@property(nonatomic) double progress;
@property(nonatomic) long long progressViewStyle;
- (id)initWithProgressViewStyle:(long long)arg1;
- (id)initWithActivityIndicatorStyle:(long long)arg1;
@end
