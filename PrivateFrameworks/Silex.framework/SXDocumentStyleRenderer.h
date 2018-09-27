/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDocumentStyleRenderer : NSObject <SXDocumentStyleRenderer, SXViewportChangeListener> {
    <SXDocumentControllerProvider> * _documentControllerProvider;
    <SXGradientFactory> * _gradientFactory;
    SXGradientFillView * _gradientFillView;
    SXImageFillView * _imageFillView;
    <SXImageViewFactory> * _imageViewFactory;
    <SXPresentationDelegate> * _presentationDelegate;
    UIView * _topBackgroundView;
    SXVideoFillView * _videoFillView;
    SXViewport * _viewport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentControllerProvider> *documentControllerProvider;
@property (nonatomic, readonly) <SXGradientFactory> *gradientFactory;
@property (nonatomic, retain) SXGradientFillView *gradientFillView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SXImageFillView *imageFillView;
@property (nonatomic, readonly) <SXImageViewFactory> *imageViewFactory;
@property (nonatomic) <SXPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *topBackgroundView;
@property (nonatomic, retain) SXVideoFillView *videoFillView;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (void)applyBackgroundColorForStyle:(id)arg1 onView:(id)arg2;
- (void)applyFillForStyle:(id)arg1 onView:(id)arg2;
- (void)applyStyle:(id)arg1 onView:(id)arg2;
- (void)applyTopBackgroundForStyle:(id)arg1 onView:(id)arg2;
- (id)documentControllerProvider;
- (id)gradientFactory;
- (id)gradientFillView;
- (id)gradientViewForFill:(id)arg1;
- (id)imageFillView;
- (id)imageViewFactory;
- (id)imageViewForFill:(id)arg1;
- (id)initWithDocumentControllerProvider:(id)arg1 viewport:(id)arg2 imageViewFactory:(id)arg3 gradientFactory:(id)arg4;
- (void)layoutTopBackgroundView;
- (id)presentationDelegate;
- (void)setGradientFillView:(id)arg1;
- (void)setImageFillView:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setTopBackgroundView:(id)arg1;
- (void)setVideoFillView:(id)arg1;
- (id)topBackgroundView;
- (id)videoFillView;
- (id)videoPlayerViewForFill:(id)arg1;
- (id)viewForFill:(id)arg1;
- (id)viewport;
- (void)viewport:(id)arg1 boundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end