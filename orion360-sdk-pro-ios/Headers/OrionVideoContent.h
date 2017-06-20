//
//  OrionVideoContent.h
//  orion360-sdk-pro-ios
//
//  Created by Hannu Limma on 02.10.2014.
//  Copyright (c) 2014 Finwe Ltd. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>
#import <orion360-sdk-pro-ios/OrionContent.h>

@class OrionVideoContent;

/**
 *  OrionVideoContentDelegate protocol defines the optional methods implemented by
 *  delegates of the OrionVideoContent class.
 */
@protocol OrionVideoContentDelegate<OrionContentDelegate>
@optional

/**
 *  Tells the delegate that a preview image has been generated from OrionVideoContent.
 *
 *  @param orionVideoContent Orion video content
 *  @param previewImage      Generated image
 */
- (void)orionVideoContentDidGeneratePreviewImage:(OrionVideoContent*)orionVideoContent previewImage:(UIImage*)previewImage;

/**
 *  Tells the delegate that OrionVideoContent reached end.
 *
 *  @param orionVideoContent Orion video content
 */
- (void)orionVideoContentDidReachEnd:(OrionVideoContent*)orionVideoContent;

/**
 *  Tells the delegate that OrionVideoContent is ready to play.
 *
 *  @param orionVideoContent Orion video content
 */
- (void)orionVideoContentReadyToPlayVideo:(OrionVideoContent*)orionVideoContent;

/**
 *  Tells the delegate that OrionVideoContent time values changed.
 *
 *  @param orionVideoContent Orion video content
 *  @param currentTime       Current time in seconds
 *  @param availableTime     Availabble time in seconds
 *  @param totalDuration     Total video duration in seconds
 */
- (void)orionVideoContentDidUpdateProgress:(OrionVideoContent*)orionVideoContent currentTime:(CGFloat)currentTime availableTime:(CGFloat)availableTime totalDuration:(CGFloat)totalDuration;

/**
 *  Tells the delegate that OrionVideoContent time values changed.
 *
 *  @param orionVideoContent Orion video content
 *  @param currentTime       Current time in seconds
 *  @param totalDuration     Total video duration in seconds
 *  @param loadedTimeRanges  This property provides a collection of time ranges for which the player has the media data readily available. The ranges provided might be discontinuous.
 */
- (void)orionVideoContentDidUpdateProgress:(OrionVideoContent*)orionVideoContent currentTime:(CGFloat)currentTime totalDuration:(CGFloat)totalDuration loadedTimeRanges:(NSArray*)loadedTimeRanges;


/**
 *  Tells the delegate that OrionVideoContent changed buffering status.
 *
 *  @param orionVideoContent Orion video content
 *  @param buffering         Buffering status
 */
- (void)orionVideoContentDidChangeBufferingStatus:(OrionVideoContent*)orionVideoContent buffering:(BOOL)buffering;
@end




/**
 *  Class OrionVideoContent inherits from OrionContent
 */
@interface OrionVideoContent : OrionContent

/**
 *  Orion video content delegate
 */
@property (nonatomic, weak) id <OrionVideoContentDelegate> delegate;

/**
 *  Current OrionVideoContent progress in seconds.
 */
@property (nonatomic, readonly) CGFloat currentTime;

/**
 *  Current available seconds (buffered).
 */
@property (nonatomic, readonly) CGFloat availableTime;

/**
 *  OrionVideoContent total duration in seconds.
 */
@property (nonatomic, readonly) CGFloat totalDuration;

/**
 *  URL to PreviewImage for hybrid mode.
 */
@property (nonatomic) NSURL* previewImage;

/**
 *  Video buffer size, >= 1 second, default 5 seconds.
 */
@property (nonatomic) CGFloat bufferSize;

/**
 *  Current OrionVideoContent mode.
 *
 *  Enum types:
 *
 *   - VIDEO_CONTENT_MODE_SUSPENDED (default)
 *
 *   - VIDEO_CONTENT_MODE_PREVIEW_IMAGE
 *
 *   - VIDEO_CONTENT_MODE_VIDEO_PLAYBACK
 *
 *   - VIDEO_CONTENT_MODE_COUNT
 */
@property (nonatomic) OrionVideoContentMode contentMode;

/**
 *  Volume
 */
@property (nonatomic) CGFloat volume;

/**
 *  Current player index
 */
@property (nonatomic) NSUInteger playerIndex;

/**
 *  Starts OrionVideoContent playback.
 */
- (void)play;

/**
 *  Plays OrionVideoContent staring from given location.
 *
 *  @param seekToTime Given location in seconds
 */
- (void)play:(CGFloat)seekToTime;

- (void)continueSynchronized:(CFAbsoluteTime)referenceAbsoluteTime delay:(CGFloat)delay playerTime:(CGFloat)playerTime;

- (void)playSynchronized:(CFAbsoluteTime)fromTime delay:(CGFloat)delay;

/**
 *  Pauses current OrionVideoContent playback.
 */
- (void)pause;

/**
 *  Returns true if current OrionVideoContent playback paused.
 *
 *  @return YES, if current video playback is paused, otherwise NO
 */
- (bool)isPaused;

/**
 *  Seeks OrionVideoContent to given location.
 *
 *  @param seekToTime Given location in seconds
 */
- (void)seekTo:(CGFloat)seekToTime;
- (void)seekExactlyTo:(CGFloat)seekToTime;

@end
