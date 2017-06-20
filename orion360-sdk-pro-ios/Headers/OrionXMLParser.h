//
//  OrionXMLParser.h
//  orion360-sdk-pro-ios
//
//  Created by Petri Määttä on 10/02/14.
//  Copyright (c) 2014 Finwe Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <orion360-sdk-pro-ios/OrionViewportItem.h>

//@class OrionScene;
typedef void (^OrionXMLParserSceneHotspotHandler)(OrionViewportItem *item);

@interface OrionXMLParser : NSObject
{
    
}
- (id)initWithXMLParser:(NSXMLParser *)parser tagList:(NSSet *)tagList;
- (void)eachScene:(OrionXMLParserSceneHotspotHandler)handler;
- (BOOL)parseHotspots;

@end
