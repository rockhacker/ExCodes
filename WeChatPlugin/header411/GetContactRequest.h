//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

@interface GetContactRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUserCount:1;
    unsigned int hasAntispamTicketCount:1;
    unsigned int hasFromChatRoomCount:1;
    unsigned int userCount;
    unsigned int antispamTicketCount;
    unsigned int fromChatRoomCount;
    BaseRequest *baseRequest;
    NSMutableArray *mutableUserNameListList;
    NSMutableArray *mutableAntispamTicketList;
    NSMutableArray *mutableFromChatRoomList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableFromChatRoomList; // @synthesize mutableFromChatRoomList;
@property(nonatomic, setter=SetFromChatRoomCount:) unsigned int fromChatRoomCount; // @synthesize fromChatRoomCount;
@property(readonly, nonatomic) BOOL hasFromChatRoomCount; // @synthesize hasFromChatRoomCount;
@property(retain, nonatomic) NSMutableArray *mutableAntispamTicketList; // @synthesize mutableAntispamTicketList;
@property(nonatomic, setter=SetAntispamTicketCount:) unsigned int antispamTicketCount; // @synthesize antispamTicketCount;
@property(readonly, nonatomic) BOOL hasAntispamTicketCount; // @synthesize hasAntispamTicketCount;
@property(retain, nonatomic) NSMutableArray *mutableUserNameListList; // @synthesize mutableUserNameListList;
@property(nonatomic, setter=SetUserCount:) unsigned int userCount; // @synthesize userCount;
@property(readonly, nonatomic) BOOL hasUserCount; // @synthesize hasUserCount;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addFromChatRoom:(id)arg1;
- (void)addFromChatRoomFromArray:(id)arg1;
- (void)addAntispamTicket:(id)arg1;
- (void)addAntispamTicketFromArray:(id)arg1;
- (void)addUserNameList:(id)arg1;
- (void)addUserNameListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *fromChatRoom; // @dynamic fromChatRoom;
- (id)fromChatRoomList;
@property(retain, nonatomic) NSMutableArray *antispamTicket; // @dynamic antispamTicket;
- (id)antispamTicketList;
@property(retain, nonatomic) NSMutableArray *userNameList; // @dynamic userNameList;
- (id)userNameListList;
- (id)init;

@end
