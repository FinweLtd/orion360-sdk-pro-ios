//
//  OrionViewportItem.h
//  orion360-sdk-pro-ios
//
//  Created by Hannu Limma on 02.10.2014.
//  Copyright (c) 2014 Finwe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <orion360-sdk-pro-ios/OrionContent.h>
#import <orion360-sdk-pro-ios/OrionVideoContent.h>
#import <orion360-sdk-pro-ios/OrionViewportItemTimestamp.h>
#import <orion360-sdk-pro-ios/OrionResources.h>

/**
 *  Class OrionViewportItem
 */
@interface OrionViewportItem : NSObject

/**
 *  OrionContent to show as a OrionViewportItem (hotspot).
 */
@property (nonatomic, weak) OrionContent *orionContent;


/**
 *  Overlay OrionContent to show during selection.
 */
@property (nonatomic, weak) OrionContent *orionSelectionContent;

/**
 *  Background OrionContent to show during selection.
 */
@property (nonatomic, weak) OrionContent *orionBackgroundContent;

/**
 *  OrionViewportItem aplha value (0...1).
 */
@property (nonatomic) CGFloat alpha;

/**
 *  OrionViewportItem scale value (0...1).
 */
@property (nonatomic) CGFloat scale;

/**
 *  OrionViewportItem visible.
 *
 *  Default YES.
 */
@property (nonatomic) BOOL visible;

/**
 *  OrionViewRotation.
 */
@property (nonatomic) OrionViewRotation* rotation;

/**
 *  Fixed rotation.
 *
 *  Default NO.
 */
@property (nonatomic) BOOL fixedRotation;

/**
 *  Viewport item is user tag.
 *
 *  Default NO.
 */
@property (nonatomic) BOOL viewportItemTypeTag;

/**
 *  Action index for application, when selecting the item.
 */
@property (nonatomic) NSUInteger actionIndex;

/**
 *  Array of timestamps.
 */
@property (nonatomic) NSArray *timeStamps;

/**
 * Modes when viewportitem visible
 *
 * Default all possible modes
 */
@property (nonatomic) OrionViewportItemVisibleModes visibleInModes;

@property (nonatomic) CGFloat progress;
@property (nonatomic) NSUInteger pulsingSpeed;
@property (nonatomic) CGFloat selectionZoomScale;
@property (nonatomic) NSUInteger selectionInFrames;

@property (nonatomic) CGFloat offsetY;
@property (nonatomic) CGFloat offsetX;
@property (nonatomic) CGFloat bgScaleFactor;
@end
