//
//  SdkCredential.h
//

#import <Foundation/Foundation.h>

@interface SdkCredential : NSObject

- (id)init __attribute__((unavailable("init not available, use initWith...")));

- (id)initWithAccessToken:(NSString *)aToken refreshUrl:(NSString *)rUrl environment:(NSString *)env;

- (id)initWithEnvironment:(NSString *)env;

-(SdkCredential *)setTokenRefreshUrl:(NSString *)refreshUrl;

-(SdkCredential *)setRepo:(NSString *)repository;
    
-(SdkCredential *)setFirstPartyCredentials:(NSString *)clientId appSecret:(NSString *)appSecret;

-(SdkCredential *)setThirdPartyCredentials:(NSString *)accessToken;

@property (nonatomic, copy) NSString *accessToken;

@property (nonatomic, copy) NSString *refreshUrl;

@property (nonatomic, copy) NSString *refreshToken;

@property (nonatomic, copy) NSString *clientId;

@property (nonatomic, copy) NSString *appSecret;

@property (nonatomic, copy) NSString *environment;

@property (nonatomic, copy) NSString *repository;

@end
