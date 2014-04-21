//
//  Deck.h
//  Matchismo
//
//  Created by Rajesh Shenoy on 4/5/14.
//  Copyright (c) 2014 Poirot Systems. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject
- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;


@end


