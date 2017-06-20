//
//  OrionController.h
//  orion360-sdk-pro-ios
//
//  Created by Hannu Limma on 02.10.2014.
//  Copyright (c) 2014 Finwe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Class inherited by OrionViewportController and OrionViewportItemController.
 */
@interface OrionController : NSObject

// PROPERTIES
/**
 *  Gestures enabled flag for OrionViewportItemController or OrionViewportController.
 */
@property (nonatomic) BOOL gesturesEnabled;

// FUNCTIONS
/**
 *  Function to parse JSON file containing, e.g. hotspot definitions.
 *
 *  @param jsonFile JSON file url
 */
- (void)parseJSON:(NSURL*)jsonFile;

/**
 *  Function to parse XML file containing, e.g. hotspot definitions.
 *
 *  @param xmlFile XML file url
 */
- (void)parseXML:(NSURL*)xmlFile;

@end
