//
//  OrionContent.h
//  orion360-sdk-pro-ios
//
//  Created by Hannu Limma on 02.10.2014.
//  Copyright (c) 2014 Finwe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <orion360-sdk-pro-ios/OrionViewRotation.h>
#import <orion360-sdk-pro-ios/OrionResources.h>

@protocol OrionContentDelegate;

/**
 *  Class OrionContent
 */
@interface OrionContent : NSObject

/**
 *  Orion content delegate
 */
@property (nonatomic, weak) id <OrionContentDelegate> delegate;

/**
 *  Content projection.
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
 *  Default OrionViewRotation (natural starting orientation quaternion from yaw, pitch, roll).
 *  Rotation parameters for the view in degrees (0 - 360).
 */
@property (nonatomic) OrionViewRotation *rotation;

/**
 *  URI array, used if imageArray is empty.
 *  
 * cArray of NSURLs of media.
 */
@property (nonatomic) NSArray *uriArray;

/**
 *  UIImage array.
 *  
 *  Array of UIImages of media.
 */
@property (nonatomic) NSArray *imageArray;

/**
 *  Initial diagonal fov (field of view) in degrees (fovMin -> fovMax).
 *  
 *  Default value 90.
 */
@property (nonatomic) CGFloat fovDefault;

/**
 *  Maximum diagonal fov (field of view) in degrees (fovMin -> 180).
 * 
 *  Default value 120.
 */
@property (nonatomic) CGFloat fovMax;

/**
 *  Minimum diagonal fov (field of view) in degrees (0 -> fovMax).
 *  
 *  Default value 60.
 */
@property (nonatomic) CGFloat fovMin;

/**
 *  NSURL of mesh configuration JSON (e.g. in file).
 */
@property (nonatomic) NSURL *meshConfigJSON;

/**
 *  StereoScopic item
 */
@property (nonatomic) OrionStereoScopic stereoScopic;

@end

/**
 *  OrionContentDelegate protocol defines the optional methods implemented by
 *  delegates of the OrionContent class.
 */
@protocol OrionContentDelegate <NSObject>
@optional

/**
 *  Tells the delegate that original content from UI is ready for Orion
 *
 *  @param OrionContent      Orion content
 *  @param content           original content from UI
 */
- (void)orionContentDidBecomeReady:(OrionContent*)OrionContent content:(id)content;

/**
 *  Tells the delegate that original content failed to become ready for Orion
 *
 *  @param OrionContent      Orion content
 *  @param content           original content from UI
 */
- (void)orionContentDidFailToBecomeReady:(OrionContent*)orionContent content:(id)content;
@end
