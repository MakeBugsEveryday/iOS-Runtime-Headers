/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSocialCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _followingLoaded;
    NSOperationQueue *_queue;
}

+ (id)activeDsid;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_entityTypeForContentType:(unsigned int)arg1;
- (void)_loadFollowingWithEntityID:(id)arg1 entityType:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_processFollowEntityOperation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_processFollowing:(id)arg1;
- (void)_processFollowingOperation:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateFollowItem:(id)arg1 withState:(BOOL)arg2;
- (id)init;
- (void)loadFollowingWithCompletionHandler:(id /* block */)arg1;
- (BOOL)requestFollowingStateForEntityWithStoreID:(long long)arg1;
- (void)requestFollowingStateForEntityWithStoreID:(long long)arg1 contentType:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)updateFollowingState:(BOOL)arg1 forEntityWithStoreID:(long long)arg2 contentType:(unsigned int)arg3 completion:(id /* block */)arg4;

@end