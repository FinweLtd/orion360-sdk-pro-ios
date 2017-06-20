//
//  OrionResources.h
//  orion360-sdk-pro-ios
//
//  Created by Petri Määttä on 06/10/14.
//  Copyright (c) 2014 Finwe Ltd. All rights reserved.
//

#ifndef FinweComponents_OrionResources_h
#define FinweComponents_OrionResources_h


/**
 * Possible projection types
 */
enum {
    PROJECTION_EQUIRECT = 0,
    PROJECTION_CUBEMAP,        //Not supported
    PROJECTION_RECTILINEAR,    //TODO
    PROJECTION_SOURCE,
    PROJECTION_LITTLE_PLANET,
    PROJECTION_MIRROR_BALL,    //TODO
    PROJECTION_THETA,
    PROJECTION_KODAK,
    PROJECTION_TYPE_COUNT
};
typedef int OrionProjection;

/**
 * Renderer type
 */
enum {
    FINWE_RENDERER = 0,
    RENDERER_TYPE_COUNT
};
typedef int OrionRenderer;

/**
 * Image effect type
 */
enum {
    NO_FX = 0,
    IMAGE_FX_TYPE_COUNT
};
typedef int OrionImageFX;

/**
 * Vr mode type
 */
enum {
    VR_MODE_NONE = 0,
    VR_MODE_2D,
    VR_MODE_2D_PORTRAIT,
    VR_MODE_COUNT
};
typedef uint OrionVrMode;

/**
 * Control mode
 */
enum {
    CONTROL_MODE_INTERNAL = 0,
    CONTROL_MODE_EXTERNAL,
    CONTROL_MODE_COUNT
};
typedef uint OrionControlMode;

/**
 * Mirroring/remote mode
 */
enum {
    REMOTE_MODE_OFF = 0,
    REMOTE_MODE_MASTER,
    REMOTE_MODE_SLAVE
};
typedef uint OrionViewportRemoteMode;

/**
 * Possible video content modes
 */
enum {
    VIDEO_CONTENT_MODE_SUSPENDED = 0,   //Video and previewimages destroyed -> nothing to show
    VIDEO_CONTENT_MODE_PREVIEW_IMAGE,   //Preloaded UIImage shown in panorama view or new texture generated from given video URL
    VIDEO_CONTENT_MODE_VIDEO_PLAYBACK,  //Video shown in panorama view, DEFAULT value
    VIDEO_CONTENT_MODE_COUNT
};
typedef NSUInteger OrionVideoContentMode;

/**
 * Vr control state
 */
enum {
    VR_CONTROL_STATE_OFF = 0,                   //When UI should hide viewfinder
    VR_CONTROL_STATE_INITIALIZED,               //When UI should show viewfinder
    VR_CONTROL_STATE_VIEWPORTITEM_SELECTING,    //When selecting progress starts for viewportitem
    VR_CONTROL_STATE_VIEWPORTITEM_UNSELECTING,  //When selecting progress changes to unsecting for viewportitem
    VR_CONTROL_STATE_SELECTED,                  //When viewportitem selected
};
typedef NSUInteger OrionVrControlState;

/**
 * Vr headset model
 */
enum {
    VR_HEADSET_DEFAULT = 0,                     //Default lens correction
    VR_HEADSET_NONE,                            //No lens correction
    VR_HEADSET_ZEISS_VR_ONE,
};
typedef NSUInteger OrionVrHeadsetModel;

/**
 * Orion viewportitem visible modes
 */
enum {
    OrionViewportItemVisibleNormalMode              = 1 <<  0,
    OrionViewportItemVisibleVRMode2D                = 1 <<  1,
    OrionViewportItemVisibleVRMode2DPortrait        = 1 <<  2,
};
typedef NSUInteger OrionViewportItemVisibleModes;


/**
 * Possible stereoscopic types
 */
enum {
    STEREOSCOPIC_NONE = 0,
    STEREOSCOPIC_OVER_UNDER,        //Left eye on top, right eye on bottom
    STEREOSCOPIC_SIDE_BY_SIDE       //Left eye on left, right eye on right
};
typedef NSUInteger OrionStereoScopic;

#endif
