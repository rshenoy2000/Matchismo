//
//  PlayingCard.h
//  Matchismo
//
//  Created by Rajesh Shenoy on 4/5/14.
//  Copyright (c) 2014 Poirot Systems. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
