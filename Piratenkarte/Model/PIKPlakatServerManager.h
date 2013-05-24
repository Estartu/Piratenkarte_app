//
//  PIKPlakatServerManager.h
//  Piratenkarte
//
//  Created by Dominik Wagner on 19.05.13.
//  Copyright (c) 2013 Dominik Wagner. All rights reserved.
//

#import <Foundation/Foundation.h>
@class PIKPlakatServerManager;

#import "PIKPlakatServer.h"

@interface PIKPlakatServerManager : NSObject

+ (instancetype)plakatServerManager;
- (void)refreshServerList;

@property (nonatomic, readonly) PIKPlakatServer *selectedPlakatServer;


@end
