/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */



@interface SPDaemonConnection : NSObject 
{
    NSUInteger _publicPort;
    NSUInteger _serverPort;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
}

+ (id)sharedConnection;

- (void)appWasSelected:(id)arg1 queryString:(id)arg2;
- (void)searchResultWasSelected:(unsigned long long)arg1 inDomain:(NSUInteger)arg2 queryString:(id)arg3;
- (void)unregisterApplication:(id)arg1;
- (void)registerApplication:(id)arg1 withCategories:(id)arg2;
- (BOOL)indexUpdatedContent:(id)arg1 moreComing:(BOOL)arg2;
- (BOOL)willStartIndexingForDisplayID:(id)arg1 category:(id)arg2;
- (BOOL)retrieveUpdateList:(id*)arg1;
- (BOOL)endRecordUpdatesForApplication:(id)arg1 andCategory:(id)arg2;
- (BOOL)requestRecordUpdatesForApplication:(id)arg1 category:(id)arg2 andIDs:(id)arg3;
- (BOOL)startRecordUpdatesForApplication:(id)arg1 andCategory:(id)arg2;
- (void)preheat;
- (BOOL)_appInstalled:(BOOL)arg1 withDisplayIdentifier:(id)arg2 withCategories:(id)arg3;
- (void)_handleSendFailure:(NSInteger)arg1 inCodeNamed:(const char *)arg2;
- (void)invalidateServerPort;
- (NSUInteger)publicPort;
- (id)init;
- (void)dealloc;
- (void)cancelQuery:(id)arg1;
- (id)startQuery:(id)arg1;
- (NSUInteger)serverPort;

@end