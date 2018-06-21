//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

@class MMTimer, MMView, NSImageView, NSTextField, NSVisualEffectView;

@interface MMToastPanel : NSPanel
{
    MMView *_containerView;
    MMView *_backgroundView;
    NSVisualEffectView *_effectView;
    NSTextField *_textField;
    NSImageView *_imageView;
    MMTimer *_timer;
}

@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) MMView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MMView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 screen:(id)arg5;

@end
