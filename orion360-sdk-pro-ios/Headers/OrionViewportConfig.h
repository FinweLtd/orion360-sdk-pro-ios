//
//  OrionViewportConfig.h
//  orion360-sdk-pro-ios
//
//  Created by Hannu Limma on 02.10.2014.
//  Copyright (c) 2014 Finwe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <orion360-sdk-pro-ios/OrionResources.h>

/**
 *  Class OrionviewportConfig defines initial orion viewport configurations.
 */
@interface OrionViewportConfig : NSObject

/**
 *  OrionViewport frame with location and size.
 */
@property (nonatomic) CGRect frame;

/**
 *  OrionViewport image effect type.
 *
 *  Enum types:
 *
 *  - NO_FX = 0
 *
 *  - IMAGE_FX_TYPE_COUNT.
 */
@property (nonatomic) OrionImageFX imageFX;

/**
 *  initial projection.
 *
 *  Enum types:
 *
 *   - PROJECTION_EQUIRECT (default)
 *
 *   - PROJECTION_CUBEMAP
 *
 *   - PROJECTION_RECTILINEAR
 *
 *   - PROJECTION_SOURCE
 *
 *   - PROJECTION_LITTLE_PLANET
 *
 *   - PROJECTION_MIRROR_BALL
 *
 *   - PROJECTION_TYPE_COUNT
 */
@property (nonatomic) OrionProjection projection;

/**
 *  OrionViewport full screen mode flag.
 *
 *  Default NO.
 */
@property (nonatomic) BOOL fullScreenEnabled;

/**
 *  OrionViewport full screen animation in frames.
 */
@property (nonatomic) NSUInteger animateFullScreenInFrames;

/**
 *  OrionViewport vrmode.
 *
 *  Enum types:
 *
 *   - VR_MODE_NONE (default)
 *
 *   - VR_MODE_2D
 *
 *   - VR_MODE_2D_PORTRAIT
 *
 *   - VR_MODE_COUNT
 *
 *  Requires full screen mode enabled.
 */
@property (nonatomic) OrionVrMode vrMode;

/**
 *  OrionViewport vrmode controls.
 *
 *  Requires full screen mode enabled.
 */
@property (nonatomic) BOOL vrModeControls;

/**
 *  OrionViewport transparency.
 *
 * Default 1.0f.
 */
@property (nonatomic) CGFloat alpha;

/**
 *  OrionViewport visibility.
 *
 *  Default YES.
 */
@property (nonatomic) BOOL visible;

/**
 *  OrionViewport remote control mode.
 *
 *  Enum types:
 *
 *   - REMOTE_MODE_OFF (default)
 *
 *   - REMOTE_MODE_MASTER
 *
 *   - REMOTE_MODE_SLAVE
 */
@property (nonatomic) OrionViewportRemoteMode remoteMode;

/**
 *  Device Model.
 */
//@property (nonatomic) NSString* deviceModel;

/**
 *  Rotation gesture disabled.
 *
 *  Default NO.
 */
@property (nonatomic) BOOL rotationGestureDisabled;

/**
 *  Pan gesture disabled.
 *
 *  Default NO
 */
@property (nonatomic) BOOL panGestureDisabled;

/**
 *  VR headset model.
 *
 *  Enum types:
 *
 *   - VR_HEADSET_DEFAULT (default)
 *
 *   - VR_HEADSET_ZEISS_VR_ONE
 */
//@property (nonatomic) OrionVrHeadsetModel vrHeadsetModel;

/**
 *  Distance in degrees from viewportitem when initialized call back is called
 *
 *  Default 10.0f
 */
@property (nonatomic) CGFloat vrControlsInitializationDistance;

/**
 *  Tag mode enabled. Automatically sets back to NO when tagging ended.
 *
 *  Default NO
 */
@property (nonatomic) BOOL tagModeEnabled;

@end
