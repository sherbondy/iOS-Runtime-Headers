/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileCache : NSObject {
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    GEOTileCacheReserved * _reserved;
}

@property (readonly) unsigned int currentCost;
@property (readonly) unsigned int currentCount;
@property unsigned int maxCapacity;
@property unsigned int maxCost;

- (id)_description;
- (void)_enteredBackground:(id)arg1;
- (void)_evictWithMaxCost:(unsigned int)arg1 maxCapacity:(unsigned int)arg2;
- (void)_receivedMemoryNotification;
- (void)_removeTileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (BOOL)containsKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 cost:(unsigned int*)arg2;
- (unsigned int)currentCost;
- (unsigned int)currentCount;
- (void)dealloc;
- (id)description;
- (void)enumerate:(id /* block */)arg1;
- (id)init;
- (unsigned int)maxCapacity;
- (unsigned int)maxCost;
- (void)removeAllObjects;
- (void)removeTileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)removeTilesMatchingPredicate:(id /* block */)arg1;
- (void)removeTilesWithKeys:(id)arg1;
- (void)setMaxCapacity:(unsigned int)arg1;
- (void)setMaxCost:(unsigned int)arg1;
- (void)setNullForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)setTile:(id)arg1 forKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 cost:(unsigned int)arg3;
- (id)tileForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;

@end
