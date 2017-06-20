//
//  OrionViewRotation.h
//  orion360-sdk-pro-ios
//
//  Created by Petri Määttä on 02/10/14.
//  Copyright (c) 2014 Finwe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

/**
 *  Class OrioViewRotation
 */
@interface OrionViewRotation : NSObject

/**
 *  Rotation around y-axis in degrees (0 - 360).
 */
@property (nonatomic) CGFloat yaw;

/**
 *  Rotation around x-axis in degrees (0 - 360).
 */
@property (nonatomic) CGFloat pitch;

/**
 *  Rotation around z-axis in degrees (0 - 360).
 */
@property (nonatomic) CGFloat roll;

@end
