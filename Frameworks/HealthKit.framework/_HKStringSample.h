/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKStringSample : _HKBinarySample {
    NSString * _stringValue;
}

@property (readonly) _HKStringSampleType *stringType;
@property (readonly) NSString *stringValue;

+ (BOOL)_isConcreteObjectClass;
+ (id)stringSampleWithType:(id)arg1 stringValue:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setPayload:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)payload;
- (id)stringType;
- (id)stringValue;

@end
