/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNReputationHandle : NSObject <NSCopying> {
    NSString * _stringValue;
    int  _type;
}

@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly) int type;

+ (id)descriptionForType:(int)arg1;
+ (id)handleWithEmailAddress:(id)arg1;
+ (id)handleWithPhoneNumber:(id)arg1;
+ (id)handleWithStringValue:(id)arg1;

- (void).cxx_destruct;
- (void)configureBuilder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)initWithStringValue:(id)arg1 type:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)stringValue;
- (int)type;

@end
