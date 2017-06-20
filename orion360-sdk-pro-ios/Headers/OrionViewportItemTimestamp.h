//
//  OrionViewportItemTimestamp.h
//  orion360-sdk-pro-ios
//
//  Created by Hannu Limma on 13.03.2015.
//  Copyright (c) 2015 Finwe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <orion360-sdk-pro-ios/OrionViewRotation.h>

/**
 *  Class OrionViewportItemTimeStamp
 */
@interface OrionViewportItemTimestamp : NSObject

/**
 *  OrionViewportItem timestamp.
 */
@property (nonatomic) CGFloat timeStamp;

/**
 *  OrionViewportItem rotation (OrionViewRotation).
 */
@property (nonatomic) OrionViewRotation* rotation;

/**
 *  OrionViewportItem scale value.
 */
@property (nonatomic) CGFloat scale;

/**
 *  OrionViewportItem alpha value.
 */
@property (nonatomic) CGFloat alpha;
@end
