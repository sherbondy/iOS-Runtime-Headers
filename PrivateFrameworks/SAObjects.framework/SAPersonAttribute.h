/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class <SAAceSerializable>, NSString, SAPerson;

@interface SAPersonAttribute : AceObject <SAAceSerializable> {
}

@property(copy) NSString * data;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * displayText;
@property(readonly) unsigned long long hash;
@property(retain) SAPerson * object;
@property(readonly) Class superclass;
@property(retain) <SAAceSerializable> * typedData;

+ (id)personAttribute;
+ (id)personAttributeWithDictionary:(id)arg1 context:(id)arg2;

- (id)data;
- (id)displayText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)object;
- (void)setData:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setTypedData:(id)arg1;
- (id)typedData;

@end