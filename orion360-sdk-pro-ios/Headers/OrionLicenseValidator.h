//
//  OrionLicenseValidator.h
//  orion360-sdk-pro-ios
//
//  Created by Hannu Limma on 04.06.2014.
//  Copyright (c) 2014 Finwe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OrionLicenseValidator : NSObject
{
    
}

- (BOOL)checkLicenseValidity:(NSURL*)licenseFileUrl bundleNameKey:(NSString*)bundleNameKey;
- (NSString*)getLogo;
- (BOOL)featureEnabled:(NSString*)feature;
- (BOOL)checkPlatformValidity;
- (BOOL)checkVersionNumberValidity:(NSString*)version;
- (BOOL)checkKeyAvailable:(NSString*)key;
- (BOOL)checkValidity:(NSString*)key value:(NSString*)value;

@property (nonatomic) NSMutableDictionary* parameters;

@end
