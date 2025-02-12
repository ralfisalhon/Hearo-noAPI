/*
 *  Copyright (c) 2011-2018, Zingaya, Inc. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <CoreVideo/CoreVideo.h>

/**
 * Enum of supported video rotation modes.
 */
typedef NS_ENUM(NSInteger, VIRotation) {
    /** No rotation. */
            VIRotation_0 = 0,
    /** 90 degrees clockwise rotation. */
            VIRotation_90 = 90,
    /** 180 degrees clockwise rotation. */
            VIRotation_180 = 180,
    /** 270 degrees clockwise rotation. */
            VIRotation_270 = 270
};

/**
 * Base class for all video sources. See <VICustomVideoSource> and <VICameraManager> for more information.
 */
@interface VIVideoSource : NSObject

@end

/**
 * Interface that represents video format.
 */
@interface VIVideoFormat : NSObject

/**
 * Frame size.
 */
@property(nonatomic, assign, readonly) CGSize frame;

/**
 * Time interval between frames in nanoseconds.
 */
@property(nonatomic, assign, readonly) NSUInteger interval;

/**
 * Direct initialization of this object can produce undesirable consequences.
 */
- (instancetype)init NS_UNAVAILABLE;

/**
 * Initialize video format with frame size and fps.
 *
 * @param frame Frame size.
 * @param fps   FPS.
 * @return      Video format instance.
 */
- (instancetype)initWithFrame:(CGSize)frame fps:(NSUInteger)fps;

/**
 * Initialize video format with frame size and interval.
 *
 * @param frame     Frame size.
 * @param interval  Time interval between frames in milliseconds.
 * @return          Video format instance.
 */
- (instancetype)initWithFrame:(CGSize)frame interval:(NSUInteger)interval;

@end

/**
 * Delegate that may be used to handle custom video source events.
 */
@protocol VICustomVideoSourceDelegate <NSObject>

/**
 * Triggered when custom video source is started.
 *
 * @param format Video format.
 */
- (void)startWithVideoFormat:(VIVideoFormat *)format;

/**
 * Triggered when custom video source is stopped.
 */
- (void)stop;

@end

/**
 * Interface that represents custom video source.
 */
@interface VICustomVideoSource : VIVideoSource

/**
 * Delegate to handle custom video source events.
 */
@property(nonatomic, weak) id <VICustomVideoSourceDelegate> delegate;

/**
 * Direct initialization of this object can produce undesirable consequences.
 */
- (instancetype)init NS_UNAVAILABLE;

/**
 * Initialize custom video source.
 *
 * @param formats Video format for the custom video source.
 * @return Custom video source instance.
 */
- (instancetype)initWithVideoFormats:(NSArray<VIVideoFormat *> *)formats;

/**
 * Send video frame.
 *
 * @param buffer   Pixel buffer. Should be [kCVPixelFormatType_420YpCbCr8BiPlanarFullRange](https://developer.apple.com/documentation/corevideo/1563591-pixel_format_identifiers/kcvpixelformattype_420ypcbcr8biplanarfullrange)
 *                 or [kCVPixelFormatType_420YpCbCr8BiPlanarVideoRange](https://developer.apple.com/documentation/corevideo/1563591-pixel_format_identifiers/kcvpixelformattype_420ypcbcr8biplanarvideorange).
 * @param rotation Video rotation.
 */
- (void)sendVideoFrame:(CVPixelBufferRef)buffer rotation:(VIRotation)rotation;

@end
