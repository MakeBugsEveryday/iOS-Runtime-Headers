/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVAppBasedStatusBarAppearanceController : NSObject {
    bool  _clientPrefersStatusBarHidden;
    id  _statusBarHiddenObserver;
}

@property (nonatomic) bool clientPrefersStatusBarHidden;
@property (nonatomic, retain) id statusBarHiddenObserver;

- (void).cxx_destruct;
- (void)_startObservingStatusBarHiddenIfNeeded;
- (void)_stopObservingStatusBarHiddenIfNeeded;
- (bool)clientPrefersStatusBarHidden;
- (id)init;
- (void)restoreClientPreference;
- (void)setClientPrefersStatusBarHidden:(bool)arg1;
- (void)setStatusBarHidden:(bool)arg1;
- (void)setStatusBarHiddenObserver:(id)arg1;
- (void)start;
- (id)statusBarHiddenObserver;

@end
