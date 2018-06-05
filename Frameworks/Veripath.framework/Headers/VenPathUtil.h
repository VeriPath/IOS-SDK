/**
 VENPATH CONFIDENTIAL Copyright © 2018 Venpath, Inc. All Rights Reserved.
 
 NOTICE: All information contained herein is, and remains the property of Venpath, Inc. and its suppliers and licensors, if any. The intellectual and technical concepts contained herein are proprietary to Venpath, Inc. and its suppliers and licensors and are protected by trade secret or copyright law. Dissemination of this information or reproduction of this material is strictly forbidden unless prior written permission is obtained from Venpath, Inc.
 */

#import <Foundation/Foundation.h>
#import "zlib.h"

@interface VenPathUtil : NSObject 

@property (strong) NSString* ip;

+ (NSData *)sha256HMacWithData:(NSData *)data withKey:(NSData *)key;
+ (NSData *)getV4DerivedKey:(NSString *)secret date:(NSString *)dateStamp region:(NSString *)regionName service:(NSString *)serviceName;
+ (NSString *)hashString:(NSString *)stringToHash;
+ (NSData *)hash:(NSData *)dataToHash;
+ (NSString *)hexEncode:(NSString *)string;
+ (NSString *)sha256:(NSString *)clear;
+ (NSString *)sha1:(NSString *)str;
+ (NSString*)md5HexDigest:(NSString*)input;
+ (BOOL) validateEmail: (NSString *) candidate;
+ (NSMutableArray*)getCachedValues;
+ (void) cacheValues: (NSDictionary *)params;
+ (void) clearCache;
+ (long long) getLastLocationTracked;
+ (void) saveLastLocationTracked: (long long)lastLocationTracked;
+ (long long) getLastBatchSent;
+ (void) saveLastBatchSent: (long long)lastBatchSent;
+ (NSData *)gzippedData: (NSData *) data;
+ (void)saveCachedIp:(NSString*)ip;
+ (NSString*)getCachedIp;

+ (void)saveCachedServices:(NSString*)s;
+ (NSArray*)parseServicesJsonString:(NSString*)s;
+ (NSArray*)getCachedServices;
+ (BOOL) shouldFireMotionDispatch;

@end
