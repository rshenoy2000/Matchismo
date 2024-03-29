//
//  PlayingCard.m
//  Matchismo
//
//  Created by Rajesh Shenoy on 4/5/14.
//  Copyright (c) 2014 Poirot Systems. All rights reserved.
//

#import "PlayingCard.h"

@implementation PlayingCard

- (NSString *) contents
{
    NSArray *rankString = [PlayingCard rankStrings];
    return [rankString[self.rank] stringByAppendingString:self.suit];
}

+ (NSArray *) rankStrings
{
    return @[@"?",@"A",@"2",@"3",@"4",@"5",@"6",@"7",@"8",@"9",@"10",@"J",@"Q",@"K"];
}

@synthesize suit = _suit;

+ (NSArray *) validSuits
{
    return @[@"♥︎",@"♦︎",@"♠︎",@"♣︎"];
}

- (void) setSuit:(NSString *)suit
{
    if ([[PlayingCard validSuits] containsObject:suit]){
        _suit = suit;
    }
}

- (NSString *)suit
{
    return _suit ? _suit:@"?";
}

+ (NSUInteger) maxRank { return [[self rankStrings] count]-1;}

- (void) setRank:(NSUInteger)rank
{
    if (rank <= [PlayingCard maxRank])
    {
        _rank = rank;
    }
}


@end
