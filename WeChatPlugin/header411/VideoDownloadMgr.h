//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VideoDownloadTaskDelegate.h"

@class FIFOQueue, NSMutableDictionary, NSRecursiveLock, NSString;

@interface VideoDownloadMgr : NSObject <VideoDownloadTaskDelegate>
{
    FIFOQueue *m_downloadQueue;
    unsigned long long m_downloadTaskId;
    NSMutableDictionary *m_dictDownloadTask;
    NSRecursiveLock *m_oLockForDictDownloadTask;
}

- (void).cxx_destruct;
- (void)onVideoDownloadFinish:(unsigned long long)arg1 msgData:(id)arg2;
- (BOOL)IsMsgDownloading:(id)arg1;
- (BOOL)isInDownloadingQueue:(id)arg1;
- (void)checkDownloadQueue;
- (void)DownloadVideoMsg:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
