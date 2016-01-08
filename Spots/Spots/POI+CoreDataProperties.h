//
//  POI+CoreDataProperties.h
//  Spots
//
//  Created by Kerolos Nakhla on 1/7/16.
//  Copyright © 2016 Kerolos Nakhla. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "POI.h"

NS_ASSUME_NONNULL_BEGIN

@interface POI (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *longtitude;
@property (nullable, nonatomic, retain) NSNumber *latitude;
@property (nullable, nonatomic, retain) POICategory *category;

@end

NS_ASSUME_NONNULL_END
