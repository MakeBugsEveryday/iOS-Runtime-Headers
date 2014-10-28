/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSError, NSMutableDictionary;

@interface CKDMMCSItemGroupSet : NSObject {
    NSMutableDictionary *_itemsByGroupTuple;
}

@property(readonly) NSError * error;
@property(retain) NSMutableDictionary * itemsByGroupTuple;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addItem:(id)arg1;
- (id)allItemGroups;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)itemsByGroupTuple;
- (void)setItemsByGroupTuple:(id)arg1;

@end