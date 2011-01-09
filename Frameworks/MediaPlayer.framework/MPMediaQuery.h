/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */



@interface MPMediaQuery : NSObject <NSCoding, NSCopying>
{
    void *_internal;
}

@property(retain) NSSet *filterPredicates;
@property(readonly) NSArray *items;
@property(readonly) NSArray *collections;
@property NSInteger groupingType;
@property(readonly) NSArray *itemSections;
@property(readonly) NSArray *collectionSections;

+ (void)setFilteringDisabled:(BOOL)arg1;
+ (id)albumsQuery;
+ (id)artistsQuery;
+ (id)songsQuery;
+ (id)playlistsQuery;
+ (id)podcastsQuery;
+ (id)audiobooksQuery;
+ (id)compilationsQuery;
+ (id)composersQuery;
+ (id)genresQuery;
+ (void)initialize;
+ (id)videosQuery;
+ (id)geniusMixesQuery;
+ (void)_clearCachedDynamicPropertiesForMediaLibrary:(id)arg1;
+ (void)_clearCachedItemsAndCollectionsForMediaLibrary:(id)arg1;
+ (void)_clearCachedItemsAndCollections;
+ (void)_didReceiveMemoryWarning;
+ (void)_libraryContentsDidChange:(id)arg1;
+ (void)_libraryDynamicPropertiesDidChange:(id)arg1;
+ (void)_executeMediaCacheSyncedBlock:(id)arg1;

- (id)collections;
- (NSInteger)groupingType;
- (void)setGroupingType:(NSInteger)arg1;
- (void)addFilterPredicate:(id)arg1;
- (void)removeFilterPredicate:(id)arg1;
- (id)mediaLibrary;
- (void)setMediaLibrary:(id)arg1;
- (BOOL)prefetchProperties;
- (void)setPrefetchProperties:(BOOL)arg1;
- (id)items;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)removePredicatesForProperty:(id)arg1;
- (id)ML3OrderingPropertiesForGroupingType:(NSInteger)arg1;
- (id)ML3ItemsQueryInLibrary:(id)arg1 orderingProperties:(id)arg2 nameBlankProperty:(id)arg3;
- (id)ML3ItemsQueryInLibrary:(id)arg1;
- (id)ML3CollectionsQueryInLibrary:(id)arg1;
- (id)predicateForProperty:(id)arg1;
- (id)initWithFilterPredicatesInternal:(id)arg1;
- (id)initWithFilterPredicates:(id)arg1;
- (id)initWithEntities:(id)arg1 entityType:(NSInteger)arg2;
- (void)_onQueue_addFilterPredicate:(id)arg1;
- (void)_onQueue_removeFilterPredicate:(id)arg1;
- (id)_onQueue_items;
- (id)_onQueue_collections;
- (NSInteger)_onQueue_groupingType;
- (id)itemPropertiesToFetch;
- (void)setItemPropertiesToFetch:(id)arg1;
- (id)collectionPropertiesToFetch;
- (void)setCollectionPropertiesToFetch:(id)arg1;
- (id)itemSectionInfo;
- (id)collectionSectionInfo;
- (void)setSortItems:(BOOL)arg1;
- (BOOL)sortItems;
- (id)mutableItems;
- (BOOL)specifiesPlaylistItems;
- (BOOL)willGroupEntities;
- (id)itemSections;
- (id)collectionSections;
- (NSUInteger)countOfItems;
- (NSUInteger)countOfCollections;
- (void)_onQueue_clearCachedItemsAndCollectionsForMediaLibrary:(id)arg1;
- (void)_onQueue_clearCachedItemsAndCollections;
- (void)_onQueue_clearItems;
- (void)_onQueue_clearCollections;
- (id)_onQueue_predicateForProperty:(id)arg1;
- (void)_onQueue_removePredicatesForProperty:(id)arg1;
- (id)_sanitizedQuery;
- (id)_onQueue_sanitizedQuery;
- (void)_executeMediaCacheSafeBlock:(id)arg1;
- (void)_clearCachedItemsAndCollectionsForMediaLibrary:(id)arg1;
- (void)_executeMediaCacheSyncedBlock:(id)arg1;
- (void)moveItemFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
- (BOOL)excludesEntitiesWithBlankNames;
- (void)setFilterPredicates:(id)arg1;
- (id)filterPredicates;
- (NSUInteger)groupingThreshold;
- (void)removeItemAtIndex:(NSUInteger)arg1;

@end