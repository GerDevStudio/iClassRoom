//
//  Salle+CoreDataProperties.h
//  Core Data Project
//
//  Created by gérald m on 12/02/2016.
//  Copyright © 2016 gérald m. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Salle.h"

NS_ASSUME_NONNULL_BEGIN

@interface Salle (CoreDataProperties)

@property (nullable, nonatomic, retain) NSSet<NSManagedObject *> *personne;

@end

@interface Salle (CoreDataGeneratedAccessors)

- (void)addPersonneObject:(NSManagedObject *)value;
- (void)removePersonneObject:(NSManagedObject *)value;
- (void)addPersonne:(NSSet<NSManagedObject *> *)values;
- (void)removePersonne:(NSSet<NSManagedObject *> *)values;

@end

NS_ASSUME_NONNULL_END
