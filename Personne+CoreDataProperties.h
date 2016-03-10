//
//  Personne+CoreDataProperties.h
//  Core Data Project
//
//  Created by gérald m on 12/02/2016.
//  Copyright © 2016 gérald m. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Personne.h"

NS_ASSUME_NONNULL_BEGIN

@interface Personne (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *nom;
@property (nullable, nonatomic, retain) NSString *prenom;

@end

NS_ASSUME_NONNULL_END
