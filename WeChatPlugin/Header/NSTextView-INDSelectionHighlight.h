//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

@class NSArray;

@interface NSTextView (INDSelectionHighlight)
@property(nonatomic) struct _NSRange ind_highlightedRange;
@property(retain, nonatomic) NSArray *ind_backgroundColorRanges;
- (void)ind_deselectHighlightedText;
- (void)ind_backupBackgroundColorState;
- (void)ind_highlightSelectedTextInRange:(struct _NSRange)arg1 drawActive:(BOOL)arg2;
@end
