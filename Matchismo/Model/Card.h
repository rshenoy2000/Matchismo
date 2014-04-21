//
//  Card.h
//  Matchismo
//
//  Created by Rajesh Shenoy on 4/5/14.
//  Copyright (c) 2014 Poirot Systems. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isChosen) BOOL chosen;
@property (nonatomic, getter = isMatched) BOOL matched;

-(int)match:(NSArray *) otherCards;

@end
