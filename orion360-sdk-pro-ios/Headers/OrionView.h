//
//  OrionView.h
//  orion360-sdk-pro-ios
//
//  Created by Hannu Limma on 02.10.2014.
//  Copyright (c) 2014 Finwe Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <orion360-sdk-pro-ios/OrionContent.h>
#import <orion360-sdk-pro-ios/OrionViewport.h>
#import <orion360-sdk-pro-ios/OrionViewportController.h>
#import <orion360-sdk-pro-ios/OrionVideoContent.h>
#import <orion360-sdk-pro-ios/OrionViewportItem.h>

@protocol OrionViewDelegate;

/**
 *  Class OrionView inherits from UIView
 */
@interface OrionView : UIView

/**
 *  Array of OrionViewports.
 */
@property (nonatomic, readonly) NSMutableArray* orionViewportArray;

/**
 *  Array of OrionViewportControllers.
 */
@property (nonatomic, readonly) NSMutableArray* orionViewportControllerArray;

/**
 *  Array of OrionContents.
 */
@property (nonatomic, readonly) NSMutableArray* orionContentArray;

/**
 *  Array of OrionViewPortItems.
 */
@property (nonatomic, readonly) NSMutableArray* orionViewportItemArray;

/**
 *  URL for license file.
 */
@property (nonatomic) NSURL* licenseFileUrl;

/**
 *  Screen update disabled.
 *
 *  Default NO.
 */
@property (nonatomic) BOOL screenUpdateDisabled;

/**
 *  Drag gesture enabled.
 */
@property (nonatomic) BOOL forcedDragGestureEnabled;

/**
 * Overrides iPhone's/iPad's silent switch. If YES -> silent switch does not mute video. Default NO.
 */
@property (nonatomic) BOOL overrideSilentSwitch;

/**
 * Scrolling speed factor, 0.0f - 1.0f, default: 1.0f
 */
@property (nonatomic) CGFloat scrollSpeed;
#if !TARGET_OS_TV
@property (nonatomic) UIInterfaceOrientation viewLockedToOrientation;
#endif
/**
 *  OrionView delegate.
 */
@property (nonatomic, weak) id <OrionViewDelegate> delegate;

@property (nonatomic) int meshDensity;

/**
 *  Adds OrionContent to OrionView.
 *
 *  @param orionContent Orion content to be added
 */
-(void)addOrionContent:(OrionContent*)orionContent;

/**
 *  Adds OrionViewport with certain OrionContent to OrionView.
 *
 *  @param orionViewport Orion viewport to be added
 *  @param orionContent  Orion content which already has added to orionview
 */
-(void)addOrionViewport:(OrionViewport*)orionViewport orionContent:(OrionContent*)orionContent;

/**
 *  Adds OrionViewportController with certain OrionContent to OrionView.
 *
 *  @param orionViewportController Orion viewport controller to be added
 *  @param orionContent            Orion content which already has added to orionview
 */
-(void)addOrionViewportController:(OrionViewportController*)orionViewportController orionContent:(OrionContent *)orionContent;

/**
 *  Attaches certain OrionViewport to the OrionViewportController.
 *
 *  @param viewport     Orion viewport to be attached
 *  @param vpController Orion viewport controller
 *
 *  @return YES, if viewport and viewport controller has same orion content, otherwise NO (viewport and viewport controller not attached)
 */
-(BOOL)attachOrionViewportToViewportController:(OrionViewport*)viewport vpController:(OrionViewportController*)vpController;

/**
 *  Removes certain OrionViewport from the OrionViewportController.
 *
 *  @param viewport Orion viewport to be removed
 */
-(void)removeOrionViewportFromViewportController:(OrionViewport*)viewport;

/**
 *  Takes snapshot (UIImage) with the flash.
 *
 *  @param flashStrength Flash strength
 *
 *  @return Taken snapshot
 */
-(UIImage*)takeSnapshot:(NSInteger)flashStrength;

/**
 *  Moves all OrionViewports with certain offset.
 *
 *  @param offset Offset (CGPoint)
 */
-(void)scrollAllViewports:(CGPoint)offset;

/**
 *  Crossfades from one OrionViewport to another (alpha 0.0 <-> 1.0).
 *
 *  @param inViewport  Viewport which alpha will be 0.0f
 *  @param outViewport Viewport which alpha will be 1.0f
 */
-(void)crossFadeViewports:(OrionViewport*)inViewport outViewport:(OrionViewport*)outViewport;

/**
 *  Adds OrionViewportItem to OrionView.
 *
 *  @param orionviewPortItem Orion viewport item to be added
 */
-(void)addOrionViewportItem:(OrionViewportItem*)orionviewPortItem;

/**
 *  Removes certain OrionViewportItem from OrionView.
 *
 *  @param orionviewPortItem Orion viewport item to be removed
 */
-(void)removeOrionViewportItem:(OrionViewportItem*)orionviewPortItem;

/**
 *  Attaches certain OrionViewportItem to the OrionVieport.
 *
 *  @param orionviewPortItem Orion viewport to be attached
 *  @param orionViewport     Orion viewport
 */
-(void)attachOrionViewportItemtoViewport:(OrionViewportItem*)orionviewPortItem orionViewport:(OrionViewport*)orionViewport;

/**
 *  Removes certain OrionViewportItem from the OrionViewport.
 *
 *  @param orionviewPortItem Orion viewport item to be removed
 *  @param orionViewport     Orion viewport
 */
-(void)removeOrionViewportItemFromViewport:(OrionViewportItem*)orionviewPortItem orionViewport:(OrionViewport*)orionViewport;

/**
 *  Adds time slider to certain OrionViewport and OrionVideoContent.
 *
 *  @param orionViewport Orion viewport
 */
-(void)addSlidertoViewport:(OrionViewport*)orionViewport;

/**
 *  Updates time slider progress.
 *
 *  @param currentTime   Current video time
 *  @param totalDuration Total video duration
 */
-(void)updateSlider:(CGFloat)currentTime totalDuration:(CGFloat)totalDuration;

/**
 *  Hides time slider.
 *
 *  @param hide YES, if time slider needs to be hided, NO if it needs to be visible
 */
-(void)hideSlider:(BOOL)hide;

/**
 *  Creates UIImage from UILabel.
 *
 *  @param label           UIlabel containing styled text
 *  @param backgroundColor Background color
 *  @param alpha           Alpha value (0...1)
 *
 *  @return UIImage
 */
-(UIImage *)createImage:(UILabel*)label backgroundColor:(UIColor*)backgroundColor alpha:(CGFloat)alpha;


/**
 *  Adds vr parameters required by OrionGLKView for certain device and vr headset.
 *
 *  @param deviceModel    Device model (machine name)
 *  @param vrHeadsetModel VR headset model (VR_HEADSET_DEFAULT, VR_HEADSET_ZEISS_VR_ONE,...)
 */
-(void)addVrParameters:(NSString*)deviceModel vrHeadsetModel:(OrionVrHeadsetModel)vrHeadsetModel;

/**
 *  Removes vr parameters.
 */
-(void)removeVrParameters;

@end

/**
 *  OrionViewDelegate protocol defines the optional methods implemented by
 *  delegates of the OrionView class.
 */
@protocol OrionViewDelegate
@optional
/**
 *  Tells the delegate that single tap has detected on certain OrionViewport.
 *
 *  @param view     Orionview
 *  @param viewport Orion viewport that was tapped
 */
-(void)orionViewportSingleTap:(OrionView*)view viewport:(OrionViewport*)viewport;

/**
 *  Tells the delegate that double tap has detected on certain OrionViewport.
 *
 *  @param view     Orionview
 *  @param viewport Orion viewport that was double tapped
 */
-(void)orionViewportDoubleTap:(OrionView*)view viewport:(OrionViewport*)viewport;

/**
 *  Tells the delegate that dragging has been detected on certain OrionViewport.
 *
 *  @param view     Orion view
 *  @param viewport Orion viewport that was dragged
 *  @param state    Dragging gesture state (enumeration)
 *  @param point    Point on view (CGPoint)
 */
-(void)orionViewportDrag:(OrionView*)view viewport:(OrionViewport*)viewport state:(UIGestureRecognizerState)state point:(CGPoint)point;

/**
 *  <#Description#>
 *
 *  @param view     <#view description#>
 *  @param viewport <#viewport description#>
 *  @param rotation <#rotation description#>
 *  @param fov      <#fov description#>
 */
-(void)orionViewportRemoteControlModeUpdate:(OrionView*)view viewport:(OrionViewport*)viewport rotation:(GLKQuaternion)rotation fov:(CGFloat)fov;

/**
 *  <#Description#>
 *
 *  @param view             OrionView
 *  @param viewport         OrionViewport
 *  @param thresholdAngle   Threshold pitch angle
 *  @param currentAngle     Current pitch angle
 */
-(void)orionViewportPitchAngleThreshold:(OrionView*)view viewport:(OrionViewport*)viewport thresholdAngle:(CGFloat)thresholdAngle currentAngle:(CGFloat)currentAngle;

/**
 *  Tells the delegate that OrionViewport animation was finished.
 *
 *  @param view Orionview
 */
-(void)orionViewportsDidAnimate:(OrionView*)view;

/**
 *  Tells the delegate that vr control state of certain OrionViewport was changed.
 *
 *  @param view        Orionview
 *  @param actionIndex Action index
 *  @param viewport    Orion viewport which vr control state was changed
 *  @param state       New vr control state
 */
-(void)orionViewportDidChangeVrControlState:(OrionView*)view actionIndex:(NSUInteger)actionIndex viewport:(OrionViewport*)viewport state:(OrionVrControlState)state;

/**
 *
 *  @param view         Orionview
 *  @param viewport     Orion viewport which viewportitem was tapped
 *  @param viewportItem Orion viewportitem which was tapped
 *  @param point        Touched point in view
 */
-(void)orionViewportSingleTapToViewportItem:(OrionView*)view viewport:(OrionViewport*)viewport viewportItem:(OrionViewportItem*)viewportItem point:(CGPoint)point;

/**
 *
 *  @param view         Orionview
 *  @param viewport     Orion viewport which viewportitem was tapped
 *  @param viewportItem Orion viewportitem which was tapped
 *  @param point        Touched point in view
 */
-(void)orionViewportDoubleTapToViewportItem:(OrionView*)view viewport:(OrionViewport*)viewport viewportItem:(OrionViewportItem*)viewportItem point:(CGPoint)point;

/**
 *
 *  @param view         Orionview
 *  @param viewport     Orion viewport which viewportitem was longpressed
 *  @param viewportItem Orion viewportitem which was tapped
 *  @param point        Touched point in view
 */
-(void)orionViewportLongPressToViewportItem:(OrionView*)view viewport:(OrionViewport*)viewport viewportItem:(OrionViewportItem*)viewportItem point:(CGPoint)point;

@end
