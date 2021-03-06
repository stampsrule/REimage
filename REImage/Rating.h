//
//  Rating.h
//  REImage
//
//  Created by Daniel Bell on 2015-04-13.
//  Copyright (c) 2015 BellTechMedia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class House;

@interface Rating : NSManagedObject

@property (nonatomic, retain) NSNumber * houseID;
@property (nonatomic, retain) NSNumber * rating;
@property (nonatomic, retain) House *myRatingForHouse;

@end
