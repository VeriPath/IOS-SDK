/**
 VENPATH CONFIDENTIAL Copyright © 2018 Venpath, Inc. All Rights Reserved.
 
 NOTICE: All information contained herein is, and remains the property of Venpath, Inc. and its suppliers and licensors, if any. The intellectual and technical concepts contained herein are proprietary to Venpath, Inc. and its suppliers and licensors and are protected by trade secret or copyright law. Dissemination of this information or reproduction of this material is strictly forbidden unless prior written permission is obtained from Venpath, Inc.
 */

#import <Foundation/Foundation.h>
@import CoreLocation;

@interface VenPath : NSObject <CLLocationManagerDelegate>

+(VenPath*)shared;
@property BOOL debug;
@property (strong) NSString* authSdkKey;
@property (strong) NSString* kAccess;
@property (strong) NSString* kSecret;
@property long long lastTracked;
@property long long lastBatchSent;
@property int lastSentGeneric;
@property (strong) NSString* ip;
@property (nonatomic, copy) void (^connectionErrorHandler)(NSString* error);

FOUNDATION_EXPORT NSString *const locationStream;
FOUNDATION_EXPORT NSString *const genericStream;
FOUNDATION_EXPORT NSString *const testStream;

- (void) sdkKey: (NSString*)sdkKey publicKey:(NSString*)publicKey secretKey:(NSString*)secretKey;
- (void) trackLocation: (CLLocation*)location;
- (void) track: (NSDictionary*)data;
@end

