/**
 VERIPATH CONFIDENTIAL Copyright © 2018 Veripath, Inc. All Rights Reserved.
 
 NOTICE: All information contained herein is, and remains the property of Veripath, Inc. and its suppliers and licensors, if any. The intellectual and technical concepts contained herein are proprietary to Veripath, Inc. and its suppliers and licensors and are protected by trade secret or copyright law. Dissemination of this information or reproduction of this material is strictly forbidden unless prior written permission is obtained from Veripath, Inc.
 */

#import <Foundation/Foundation.h>
@import AdSupport;

@interface VeriPathDevice : NSObject

+ (NSString *) identifierForAdvertising;
+ (NSString *) distinctId;
+ (NSString *) deviceModel;
+ (NSMutableDictionary *) collectAutomaticProperties;
@end
