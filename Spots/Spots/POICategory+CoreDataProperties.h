//
//  POICategory+CoreDataProperties.h
//  Spots
//
//  Created by Kerolos Nakhla on 1/7/16.
//  Copyright © 2016 Kerolos Nakhla. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "POICategory.h"

NS_ASSUME_NONNULL_BEGIN

@interface POICategory (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *color;
@property (nullable, nonatomic, retain) NSSet<NSManagedObject *> *pois;

@end

@interface POICategory (CoreDataGeneratedAccessors)

- (void)addPoisObject:(NSManagedObject *)value;
- (void)removePoisObject:(NSManagedObject *)value;
- (void)addPois:(NSSet<NSManagedObject *> *)values;
- (void)removePois:(NSSet<NSManagedObject *> *)values;

@end

NS_ASSUME_NONNULL_END
