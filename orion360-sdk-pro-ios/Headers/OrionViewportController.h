//
//  OrionViewportController.h
//  orion360-sdk-pro-ios
//
//  Created by Hannu Limma on 02.10.2014.
//  Copyright (c) 2014 Finwe Ltd. All rights reserved.
//

#import <orion360-sdk-pro-ios/OrionController.h>
#import <orion360-sdk-pro-ios/OrionViewport.h>

/**
 *  Class OrionViewportController inherits from OrionController
 */
@interface OrionViewportController : OrionController

// PROPERTIES

/**
 *  Array of controlled OrionViewports, 1..n.
 */
@property (nonatomic) NSMutableArray *viewportArray;

/**
 *  Flag for sensors.
 *
 *  Default YES.
 */
@property (nonatomic) BOOL sensorsEnabled;

// Flag for gestures, inherited from OrionController
//@property (nonatomic) BOOL gesturesEnabled;

/**
 *  OrionContent to which the OrionViewportController is attached.
 */
@property (nonatomic, readonly, weak) OrionContent *orionContent;

/**
 *  Mode for controlling the source of the sensor data.
 *
 *  Enum types:
 *
 *   - CONTROL_MODE_INTERNAL (default)
 *
 *   - CONTROL_MODE_EXTERNAL
 *
 *   - CONTROL_MODE_COUNT
 */
@property (nonatomic) OrionControlMode sensorsMode;

/**
 *  Mode for controlling the source of the gesture data.
 *
 * Enum types:
 *
 *   - CONTROL_MODE_INTERNAL (default)
 *
 *   - CONTROL_MODE_EXTERNAL
 *
 *   - CONTROL_MODE_COUNT
 */
@property (nonatomic) OrionControlMode gestureMode;

// FUNCTIONS
/**
 *  Adds OrionViewport to the ViewportController.
 *
 *  @param viewport The orion viewport to be added
 */
- (void)addViewport:(OrionViewport*)viewport;

/**
 *  Adds OrionViewport(s) to be controlled to the ViewportController.
 *
 *  @param viewports An array containing the viewports to be added
 */
- (void)addViewportArray:(NSArray *)viewports;

/**
 *  Updates the OrionViewport(s) orientation.
 *
 *  @param rotationQ Rotation represented by quaternion
 */
- (void)updateSensors:(GLKQuaternion)rotationQ;

/**
 *  Updates the OrionViewport(s) state by gesture additions (touch, panning, motion, rotation...).
 *
 *  @param orionViewport Orion viewport which gesture states will be updated
 *  @param state         Gesture state
 *  @param point         Screen point
 *  @param pointOffset   Point offset
 *  @param scale         Scale change
 *  @param rotation      Rotation
 */
- (void)updateGestures:(OrionViewport*)orionViewport state:(UIGestureRecognizerState)state point:(CGPoint)point pointOffset:(CGPoint)pointOffset scale:(CGFloat)scale rotation:(CGFloat)rotation;

@end
