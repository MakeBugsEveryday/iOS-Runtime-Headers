/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaControlReceiver.framework/MediaControlReceiver
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface CAAnimationDelegateBlockHelper : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _animationDidStartBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _animationDidStopBlock;

}

@property(copy) id animationDidStopBlock;
@property(copy) id animationDidStartBlock;


- (id)animationDidStartBlock;
- (void)setAnimationDidStartBlock:(id)arg1;
- (id)animationDidStopBlock;
- (void)setAnimationDidStopBlock:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;

@end