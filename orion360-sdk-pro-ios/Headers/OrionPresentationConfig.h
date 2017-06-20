//
//  OrionPresentationConfig.h
//  orion360-sdk-pro-ios
//
//  Created by Hannu Limma on 02.10.2014.
//  Copyright (c) 2014 Finwe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <GLKit/GLKit.h>
#import <orion360-sdk-pro-ios/OrionViewRotation.h>
#import <orion360-sdk-pro-ios/OrionResources.h>

/**
 * Class OrionPresentationConfig defines current orion presentation configurations.
 */
@interface OrionPresentationConfig : NSObject

/**
 * Frame
 */
@property (nonatomic, readonly) CGRect drawableFrame;

/**
 *  Viewable scnene limited on top.
 *
 *  Default YES.
 */
@property (nonatomic) BOOL viewableSceneLimitEnabledTop;

/**
 *  Viewable scene limited on bottom.
 *
 *  Default YES.
 */
@property (nonatomic) BOOL viewableSceneLimitEnabledBottom;

/**
 *  Viewable scene limited horizontally.
 *
 *  Default YES.
 */
@property (nonatomic) BOOL viewableSceneLimitEnabledHorizontal;

/**
 *  Top limit degrees.
 * 
 *  Default 90.0f.
 */
@property (nonatomic) CGFloat topLimitDegrees;

/**
 *  Bottom limit degrees.
 *
 *  Default -90.0f.
 */
@property (nonatomic) CGFloat bottomLimitDegrees;

/**
 *  Left limit degrees.
 *
 *  Default -180.0f.
 */
@property (nonatomic) CGFloat leftLimitDegrees;

/**
 *  Right limit degrees.
 *
 *  Default 180.0f.
 */
@property (nonatomic) CGFloat rightLimitDegrees;

/**
 *  Horizontal auto-leveling enabled.
 *
 *  Default YES.
 */
@property (nonatomic) BOOL autoHorizontalLevelingEnabled;

/**
 *  Auto-fov enabled.
 *
 *  Default YES.
 */
@property (nonatomic) BOOL autoFovEnabled;

/**
 *  Orion renderer.
 *
 *  Enumeration types:
 *
 *   - FINWE_RENDERER (default)
 *
 *   - RENDERER_TYPE_COUNT
 */
@property (nonatomic) OrionRenderer renderer;

// FOV properties (radians)
/**
 *  Current fov (field of view).
 */
@property (nonatomic) CGFloat currentFov;

/**
 *  Min fov (field of view).
 * 
 *  Default 1.0f.
 */
@property (nonatomic) CGFloat minFov;

/**
 *  Max fov (field of view).
 *
 *  Default 1.0f.
 */
@property (nonatomic) CGFloat maxFov;

/**
 *  Current fov (field of view) Y value. Calculated from currentFov and drawableFrame.
 */
@property (nonatomic, readonly) CGFloat fovY;

/**
 *  Current fov (field of view) X value. Calculated from currentFov and drawableFrame.
 */
@property (nonatomic, readonly) CGFloat fovX;

/**
 *  Absolute rotation as quaternion.
 */
@property (nonatomic) GLKQuaternion absoluteRotationQ;

/**
 *  Initial orionview orientation, consists of yaw, pitch and roll.
 */
@property (nonatomic) OrionViewRotation *defaultViewRotationOffset;

/**
 *  Current orionview orientation, consists of yaw, pitch and roll.
 */
@property (nonatomic, readonly) OrionViewRotation *currentRotation;

/**
 * Array of threshold angles(pitch +90-> -90) when delegate callback is fired
 */
@property (nonatomic) NSMutableArray *pitchThresholdAngles;

@end
