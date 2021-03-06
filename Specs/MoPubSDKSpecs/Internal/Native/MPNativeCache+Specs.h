//
//  MPNativeCache+Specs.h
//  MoPubSDK
//
//  Created by Evan Davis on 3/19/14.
//  Copyright (c) 2014 MoPub. All rights reserved.
//

#import "MPNativeCache.h"
#import "MPDiskLRUCache.h"

@interface MPNativeCache (Specs)

- (NSCache *)memoryCache;
- (MPDiskLRUCache *)diskCache;
- (void)setDiskCache:(MPDiskLRUCache *)diskCache;
- (void)didReceiveMemoryWarning:(NSNotification *)notification;

@end
