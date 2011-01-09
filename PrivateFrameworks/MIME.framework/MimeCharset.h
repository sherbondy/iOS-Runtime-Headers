/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSString;



@interface MimeCharset : NSObject 
{
    NSUInteger _encoding;
    NSString *_primaryLanguage;
    NSString *_charsetName;
    unsigned int _coversLargeUnicodeSubset : 1;
    unsigned int _useBase64InHeaders : 1;
    unsigned int _canBeUsedForOutgoingMessages : 1;
}

+ (id)allMimeCharsets:(BOOL)arg1;
+ (id)allMimeCharsets;
+ (id)charsetForEncoding:(unsigned long)arg1;
+ (id)preferredMimeCharset;

- (id)initWithEncoding:(unsigned long)arg1;
- (void)_setPrimaryLanguage:(id)arg1;
- (void)dealloc;
- (unsigned long)encoding;
- (id)charsetName;
- (BOOL)canBeUsedForOutgoingMessages;
- (BOOL)coversLargeUnicodeSubset;
- (BOOL)useBase64InHeaders;
- (id)displayName;
- (id)primaryLanguage;
- (id)description;

@end