//
//  OrionViewport.h
//  orion360-sdk-pro-ios
//
//  Created by Hannu Limma on 02.10.2014.
//  Copyright (c) 2014 Finwe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <orion360-sdk-pro-ios/OrionViewportConfig.h>
#import <orion360-sdk-pro-ios/OrionPresentationConfig.h>
#import <orion360-sdk-pro-ios/OrionContent.h>


@protocol OrionViewportDelegate;

/**
 *  OrionViewport class
 */
@interface OrionViewport : NSObject

// PROPERTIES
/**
 *  Viewport order (zOrder).
 */
@property (nonatomic) NSUInteger viewportZOrder;

/**
 *  Orion viewport configuration (defined in OrionViewportConfig.h).
 */
@property (nonatomic) OrionViewportConfig *viewportConfig;

/**
 *  Orion viewport presentation configuration (defined in OrionPresentationConfig.h).
 */
@property (nonatomic) OrionPresentationConfig *presentationConfig;

/**
 *  Orion content (defined in OrionContent.h).
 */
@property (nonatomic, readonly, weak) OrionContent *orionContent;

// FUNCTIONS
/**
 *  Initializes OrionViewport with the frame.
 *
 *  @param frame          Initial frame with location and size
 *  @param lockInPosition YES if viewport is locked in certain position, otherwise NO
 *
 *  @return An id of the initialized orion viewport
 */
- (id)initWithFrame:(CGRect)frame lockInPosition:(BOOL)lockInPosition;

/**
 *  Called when OrionViewport is dragged or moved on the screen Offset in screen coordinates.
 *
 *  @param offset Offset in screen coordinates
 */
- (void)moveViewport:(CGPoint)offset;

/**
 *  Brings the OrionViewport on the top, i.e. zOrder = 0.
 */
- (void)bringToFront;

/**
 *  Forces the OrionViewport frame to new frame (stored in viewportconfig).
 *
 *  @param frame New viewport frame
 */
- (void)setViewportFrame:(CGRect)frame;

- (void)resetOrientation;

@end
