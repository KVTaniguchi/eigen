#import "ArtsyAPI.h"


@interface ArtsyAPI (DeviceTokens)

+ (AFHTTPRequestOperation *)setAPNTokenForCurrentDevice:(NSString *)token success:(void (^)(id response))success failure:(void (^)(NSError *error))failure;

@end
