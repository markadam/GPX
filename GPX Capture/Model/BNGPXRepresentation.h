//
//  BNGPXRepresentation.h
//  GPX Capture
//
//  Created by Fabio on 8/24/15.
//  Copyright (c) 2015 Bluenose. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BNGPXRepresentation <NSObject>

@required
- (NSString *)gpxRepresentation;
+ (instancetype)fromGpxRepresentation:(NSDictionary *)representation;

@end
