//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface MMTimer : NSObject
{
    NSTimer *_m_timer;
}

+ (id)startTimeCheckWithInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)scheduledNoRetainTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
@property(retain, nonatomic) NSTimer *m_timer; // @synthesize m_timer=_m_timer;
- (void).cxx_destruct;
- (void)invalidate;
- (void)stopTimeCheck;
- (void)dealloc;

@end
