/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */



@interface IPPortWrapper : NSObject 
{
    struct tagIPPORT { NSInteger x1; BOOL x2[16]; union { 
            NSUInteger dwIPv4; 
            unsigned char abIPv6[16]; 
        } x3; unsigned short x4; } *_ipport;
}

@property tagIPPORT *ipport;


- (id)init;
- (void)dealloc;
- (struct tagIPPORT { NSInteger x1; BOOL x2[16]; union { NSUInteger x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)ipport;
- (void)setIpport:(struct tagIPPORT { NSInteger x1; BOOL x2[16]; union { NSUInteger x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)arg1;

@end