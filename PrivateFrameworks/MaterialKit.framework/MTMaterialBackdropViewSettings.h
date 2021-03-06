/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTMaterialBackdropViewSettings : _UIBackdropViewSettings

@property (getter=_isBlurred, nonatomic, readonly) BOOL blurred;
@property (getter=_isDarkened, nonatomic, readonly) BOOL darkened;

+ (id)lookViewBackdropViewSettingsWithBlur:(BOOL)arg1;
+ (id)lookViewBackdropViewSettingsWithBlur:(BOOL)arg1 darken:(BOOL)arg2;
+ (id)lookViewBackdropViewSettingsWithBlur:(BOOL)arg1 darken:(BOOL)arg2 materialSettings:(id)arg3;
+ (void)updateSettings:(id)arg1 withMaterialSettings:(id)arg2 blur:(BOOL)arg3 darken:(BOOL)arg4 captureOnly:(BOOL)arg5;

- (BOOL)_isBlurred;
- (BOOL)_isDarkened;
- (void)setDefaultValues;

@end
