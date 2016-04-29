//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXBarItem.h"

#import "UXKitAppearance-Protocol.h"

@class NSColor, NSString, NSView, UXViewController;

@interface UXBarButtonItem : UXBarItem <UXKitAppearance>
{
    NSView *__view;
    NSColor *_tintColor;
    long long _tintAdjustmentMode;
    long long _style;
    double _width;
    NSView *_customView;
    SEL _action;
    id _target;
    NSString *_toolTip;
    NSString *_keyEquivalent;
    unsigned long long _keyEquivalentModifierMask;
    UXViewController *_contentViewController;
    long long _systemItem;
    UXBarButtonItem *__widthConstrainingItem;
}

@property(nonatomic, setter=_setWidthConstrainingItem:) __weak UXBarButtonItem *_widthConstrainingItem; // @synthesize _widthConstrainingItem=__widthConstrainingItem;
@property(readonly, nonatomic) long long systemItem; // @synthesize systemItem=_systemItem;
@property(readonly, nonatomic) UXViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) unsigned long long keyEquivalentModifierMask; // @synthesize keyEquivalentModifierMask=_keyEquivalentModifierMask;
@property(retain, nonatomic) NSString *keyEquivalent; // @synthesize keyEquivalent=_keyEquivalent;
@property(retain, nonatomic) NSString *toolTip; // @synthesize toolTip=_toolTip;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) NSView *customView; // @synthesize customView=_customView;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)cxx_destruct;
@property(readonly, nonatomic) NSView *_view;
- (void)_performAction:(id)arg1;
- (id)_viewOfClass:(Class)arg1;
- (void)setImage:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)tintColorDidChange;
@property(nonatomic) long long tintAdjustmentMode; // @synthesize tintAdjustmentMode=_tintAdjustmentMode;
@property(retain, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
- (id)initWithStyle:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithCustomView:(id)arg1;
- (id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
