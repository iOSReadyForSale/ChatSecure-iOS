//
//  OTRTorManager.h
//  ChatSecure
//
//  Created by Christopher Ballinger on 10/3/14.
//  Copyright (c) 2014 Chris Ballinger. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "CPAProxy.h"
@interface CPAProxyManager : NSObject

@end
@interface OTRTorManager : NSObject

@property (nonatomic, strong) CPAProxyManager *torManager;

+ (instancetype) sharedInstance;

@end
