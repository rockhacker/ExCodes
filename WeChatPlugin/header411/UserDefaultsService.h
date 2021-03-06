//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSMutableDictionary, NSString, NSTimer;

@interface UserDefaultsService : MMService <MMService>
{
    BOOL _unsavedChanges;
    NSMutableDictionary *_m_allUserDefaults;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property BOOL unsavedChanges; // @synthesize unsavedChanges=_unsavedChanges;
@property(retain, nonatomic) NSMutableDictionary *m_allUserDefaults; // @synthesize m_allUserDefaults=_m_allUserDefaults;
- (void).cxx_destruct;
- (void)onSignalCrash;
- (void)_appWillTerminate:(id)arg1;
- (void)flushIntoDB;
- (BOOL)synchronize;
- (void)asynchronize;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

