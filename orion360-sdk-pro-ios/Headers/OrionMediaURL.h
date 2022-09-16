//
//  OrionMediaURL.h
//  orion360-sdk-pro-ios
//
//  Created by Esko Malm on 28.6.2022.
//  Copyright © 2022 Finwe Ltd. All rights reserved.
//

#ifndef OrionMediaURL_h
#define OrionMediaURL_h

#import <Foundation/Foundation.h>

/**
 * OrionMediaURL is derived from NSURL to allow configuration for header fields and cookies
 * needed to access secured content pointed by an URL.
 *
 * AVURLAsset utilizes all defined header fields and cookies as options for the URL.
 * Note that setting cookie definition using both header field and cookie array may not function as expected:
 * - AVPlayer seems to prefer cookie header field definition
 * - Image content loading was then also implemented to prefer cookie header field definition over cookie array
 */
@interface OrionMediaURL : NSURL

// PROPERTIES
/**
 * Header fields dictionary.
 */
@property (nonatomic) NSMutableDictionary<NSString *,NSString *> *headerFields;

/**
 * Cookie array for cookie parameter.
 */
@property (nonatomic) NSArray<NSHTTPCookie*> *cookieArray;

// FUNCTIONS
/**
 * Set header field to the header fields dictionary.
 *
 * @param key header field key
 * @param value value for the key
 */
- (void)setHeaderField:(NSString*)key value:(NSString*)value;

/**
 * Set value for header field key 'Cookie' to the header fields dictionary.
 *
 * @param cookieHeader value for key 'Cookie'
 */
- (void)setCookieHeader:(NSString*)cookieHeader;

/**
 * Get options dictionary that can be used to create AVURLAsset instance.
 *
 * All defined cookies of cookie array will be under key 'AVURLAssetHTTPCookiesKey';
 * and defined header fields under key 'AVURLAssetHTTPHeaderFieldsKey'.
 *
 * @return dictionary of asset options, can be nil.
 */
- (NSDictionary*)getOptionsForAVURLAsset;

@end

#endif /* OrionMediaURL_h */
