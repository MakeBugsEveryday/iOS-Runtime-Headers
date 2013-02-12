/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVContainerQueryTaskDelegate>, NSSet, NSString;

@interface CoreDAVContainerQueryTask : CoreDAVTask {
    Class _appSpecificDataItemClass;
    NSString *_appSpecificDataProp;
    NSString *_appSpecificNamespace;
    NSString *_appSpecificQueryCommand;
    unsigned int _searchLimit;
    NSSet *_searchTerms;
}

@property <CoreDAVContainerQueryTaskDelegate> * delegate;

+ (id)_copySearchTermsFromSearchString:(id)arg1;

- (id)_initWithSearchTerms:(id)arg1 searchLimit:(unsigned int)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (void)addFiltersToXMLData:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithSearchString:(id)arg1 searchLimit:(unsigned int)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (id)initWithSearchTerms:(id)arg1 searchLimit:(unsigned int)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (id)requestBody;

@end