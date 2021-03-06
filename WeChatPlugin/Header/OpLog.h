//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OpLog : NSObject <WCDBCoding>
{
    unsigned int oplogID;
    unsigned int oplogCmdID;
    NSData *oplogBuffer;
    long long m___rowID;
}

+ (void)_initPBTableOfOpLog;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSData *oplogBuffer; // @synthesize oplogBuffer;
@property(nonatomic) unsigned int oplogCmdID; // @synthesize oplogCmdID;
@property(nonatomic) unsigned int oplogID; // @synthesize oplogID;
- (void).cxx_destruct;
- (const basic_string_805fe43b *)getWCDBPrimaryColumnName;
- (const struct WCDBIndexHelper *)getWCDBIndexArray;
- (unsigned long long)getWCDBIndexArrayCount;
- (const map_d2afedfd *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const map_d2afedfd *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_d2afedfd *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_7a576766 *)getValueNameIndexMap;
- (id)getValueTable;
- (const WCDBCondition_11c604fa *)db_oplogBuffer;
- (const WCDBCondition_8b94cd3d *)db_oplogCmdID;
- (const WCDBCondition_8b94cd3d *)db_oplogID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

