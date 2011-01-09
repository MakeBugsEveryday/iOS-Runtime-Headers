/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface ML3MusicLibrary_SQLiteDatabaseContext : NSObject 
{
    struct sqlite3 {} **_dbStack;
    NSUInteger _dbStackCurrentIndex;
    void *_iTunesExtensions;
    struct iPhoneSortKeyBuilder { } *_sortKeyBuilder;
    struct __CFDictionary { } *_statementCache;
    unsigned int _isInTransaction : 1;
    unsigned int _transactionHasChanges : 1;
    unsigned int _transactionHasNonContentsChanges : 1;
}

@property(readonly) sqlite3 *db;
@property BOOL isInTransaction;
@property BOOL transactionHasChanges;
@property BOOL transactionHasNonContentsChanges;
@property(readonly) iPhoneSortKeyBuilder *sortKeyBuilder;


- (void)dealloc;
- (id)initWithDB:(struct sqlite3 { }*)arg1;
- (BOOL)isInTransaction;
- (void)setIsInTransaction:(BOOL)arg1;
- (BOOL)transactionHasChanges;
- (void)setTransactionHasChanges:(BOOL)arg1;
- (BOOL)transactionHasNonContentsChanges;
- (void)setTransactionHasNonContentsChanges:(BOOL)arg1;
- (struct sqlite3_stmt { }*)statementForSQL:(id)arg1;
- (struct sqlite3 { }*)db;
- (void)pushDB:(struct sqlite3 { }*)arg1;
- (void)popDB;
- (struct iPhoneSortKeyBuilder { }*)sortKeyBuilder;
- (BOOL)executeSQL:(id)arg1;

@end