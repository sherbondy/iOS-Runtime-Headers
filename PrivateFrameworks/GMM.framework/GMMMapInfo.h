/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMMapPoint;

@interface GMMMapInfo : PBCodable {
    GMMMapPoint *_center;
    BOOL _hasZoomLevel;
    NSInteger _latitudeSpan;
    NSInteger _longitudeSpan;
    NSInteger _zoomLevel;
}

@property(retain) GMMMapPoint *center;
@property(readonly) BOOL hasZoomLevel;
@property NSInteger latitudeSpan;
@property NSInteger longitudeSpan;
@property NSInteger zoomLevel;

- (id)center;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasZoomLevel;
- (id)init;
- (id)initWithRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomLevel:(NSInteger)arg2;
- (BOOL)isEqual:(id)arg1;
- (NSInteger)latitudeSpan;
- (NSInteger)longitudeSpan;
- (BOOL)readFrom:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setLatitudeSpan:(NSInteger)arg1;
- (void)setLongitudeSpan:(NSInteger)arg1;
- (void)setZoomLevel:(NSInteger)arg1;
- (void)writeTo:(id)arg1;
- (NSInteger)zoomLevel;

@end