/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWTCPConnection : NSObject <NWPrettyDescription> {
    NSArray *_certificateChain;
    struct SSLCertificate { struct SSLCertificate {} *x1; struct { unsigned int x_2_1_1; char *x_2_1_2; } x2; } *_coreTLSCertificateChain;
    struct _tls_private_key { } *_coreTLSPrivateKey;
    id _delegate;
    NWEndpoint *_endpoint;
    BOOL _hasBetterPath;
    NSObject<OS_tcp_connection> *_internalConnection;
    NWParameters *_parameters;
    struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } *_privateKey;
    int _state;
    BOOL _trustInvalidCerts;
    BOOL _viable;
}

@property (readonly) BOOL TFOSucceeded;
@property (retain) NSArray *certificateChain;
@property (readonly) NWPath *connectedPath;
@property struct SSLCertificate { struct SSLCertificate {} *x1; struct { unsigned int x_2_1_1; char *x_2_1_2; } x2; }*coreTLSCertificateChain;
@property struct _tls_private_key { }*coreTLSPrivateKey;
@property id delegate;
@property (retain) NWEndpoint *endpoint;
@property (readonly) NSError *error;
@property BOOL hasBetterPath;
@property (retain) NSObject<OS_tcp_connection> *internalConnection;
@property (readonly) NWEndpoint *localAddress;
@property (readonly) NWParameters *parameters;
@property (readonly, copy) NSString *privateDescription;
@property struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*privateKey;
@property (readonly) NWEndpoint *remoteAddress;
@property int state;
@property BOOL trustInvalidCerts;
@property (readonly) NSData *txtRecord;
@property (getter=isViable) BOOL viable;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)stringFromNWTCPConnectionState:(int)arg1;

- (void).cxx_destruct;
- (BOOL)TFOSucceeded;
- (void)cancel;
- (id)certificateChain;
- (void)cleanupPreviousTLSIdentity;
- (id)connectedPath;
- (struct SSLCertificate { struct SSLCertificate {} *x1; struct { unsigned int x_2_1_1; char *x_2_1_2; } x2; }*)coreTLSCertificateChain;
- (struct _tls_private_key { }*)coreTLSPrivateKey;
- (struct __SecTrust { }*)createTrustEvaluationFromCertificateChain:(id)arg1 peerHostname:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)endpoint;
- (id)error;
- (BOOL)fillOutTCPConnectionInfo:(struct tcp_connection_info { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 23; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; }*)arg1;
- (void)handleIdentityRequestWithHandshake:(struct _tls_handshake_s { }*)arg1 resumptionHandler:(id /* block */)arg2;
- (void)handlePeerCertificateTrustEvaluationWithHandshake:(struct _tls_handshake_s { }*)arg1 resumptionHandler:(id /* block */)arg2;
- (void)handlePrepareTLSHandshake:(struct _tls_handshake_s { }*)arg1 TLSRecord:(struct _tls_record_s { }*)arg2;
- (BOOL)hasBetterPath;
- (id)initWithAcceptedInternalConnection:(id)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithUpgradeForConnection:(id)arg1;
- (id)internalConnection;
- (BOOL)isViable;
- (id)localAddress;
- (id)parameters;
- (id)privateDescription;
- (struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)privateKey;
- (void)readLength:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)readMinimumLength:(unsigned int)arg1 maximumLength:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)readMinimumLength:(unsigned int)arg1 maximumLength:(unsigned int)arg2 timeout:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)readToPattern:(id)arg1 maximumLength:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (id)remoteAddress;
- (void)setCertificateChain:(id)arg1;
- (void)setCoreTLSCertificateChain:(struct SSLCertificate { struct SSLCertificate {} *x1; struct { unsigned int x_2_1_1; char *x_2_1_2; } x2; }*)arg1;
- (void)setCoreTLSPrivateKey:(struct _tls_private_key { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setHasBetterPath:(BOOL)arg1;
- (void)setInternalConnection:(id)arg1;
- (void)setPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (int)setRequiredPropertiesOnHandshake:(struct _tls_handshake_s { }*)arg1 fromIdentity:(struct __SecIdentity { }*)arg2 certificateChain:(id)arg3;
- (int)setRequiredPropertiesOnHandshake:(struct _tls_handshake_s { }*)arg1 fromTrust:(struct __SecTrust { }*)arg2;
- (void)setState:(int)arg1;
- (void)setTrustInvalidCerts:(BOOL)arg1;
- (void)setViable:(BOOL)arg1;
- (void)setupEventHandler;
- (BOOL)startInternal;
- (int)state;
- (BOOL)trustInvalidCerts;
- (id)txtRecord;
- (void)write:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeClose;

@end