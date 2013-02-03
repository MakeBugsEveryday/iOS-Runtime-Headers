/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIWebBrowserView, NSURLRequest, NSString, QLPreviewConverter;

@interface QLRemotePrintPageHelper : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    UIWebBrowserView *_browserView;
    NSString *_documentType;
    QLPreviewConverter *_previewConverter;
    } _printableSize;
    NSURLRequest *_request;
}

@property(retain) QLPreviewConverter * previewConverter;
@property struct CGSize { float x1; float x2; } printableSize;

+ (BOOL)_isXPathType:(id)arg1;
+ (id)printPageRendererWithBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;

- (void)_waitForPreview;
- (void)dealloc;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (int)numberOfPages;
- (id)pdfDataForPageAtIndex:(int)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 printingDone:(BOOL*)arg3;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)previewConverter;
- (struct CGSize { float x1; float x2; })printableSize;
- (void)setPreviewConverter:(id)arg1;
- (void)setPrintableSize:(struct CGSize { float x1; float x2; })arg1;

@end