//
//  InstalAdvertiserSDK.h
//  InstalAdvertiserSDK
//
//  Created by Ivan Litsvinenka on 28/05/14.
//  Copyright (c) 2014 instal.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface InstalAdvertiserSDK : NSObject

/** Tracks installation with Instal.com Advertiser Tracker
 
  @brief Initialises the Tracker with ApiKey and Application Store ID and tracks current installation
  @param apiKey Offer Api Key can be found in instal.com advertiser planel.
  @param storeId This application's Apple Store id.
 */
- (void) trackInstallWithApiKey:(NSString *)apiKey appStoreId:(NSString *)storeId;

/** Tracks event on Instal.com
 @warning you need to call trackInstallWithApiKey before this call to configure your apikey and store id
 
 @brief Tracks an event. Tracker must be configurated @see trackInstallWithApiKey:appStoreId
 @param eventName   name of the event to track
 */
- (void) trackEvent:(NSString *)eventName;

/** Tracks event on Instal.com
 @warning you need to call trackInstallWithApiKey before this call to configure your apikey and store id
 
 @brief Tracks an event. Tracker must be configurated @see trackInstallWithApiKey:appStoreId
 @param eventName   name of the event to track
 @param value       numeric value of the event
 */
- (void) trackEvent:(NSString *)eventName value:(NSNumber *)value;

+ (instancetype)sharedInstance;
@end
