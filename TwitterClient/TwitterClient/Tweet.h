//
//  Tweet.h
//  TwitterClient
//
//  Created by Chris Mamuad on 2/22/15. XiaoXiao
//  Copyright (c) 2015 Chris Mamuad. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"

@interface Tweet : NSObject
@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSDate *createdAt;
@property (nonatomic, strong) User *user;

- (id)initWithDictionary:(NSDictionary *)dictionary;

+ (NSArray *)tweetsWithArray:(NSArray *)array;

@end
