//
//  RippedHolder.h
//  AerialGun
//
//  Created by Raúl Uranga on 6/13/11.
//  Copyright 2011 GrupoW. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface RippedHolder : NSObject {
	CGRect rippedRect;
	float originalY;
}

@property(nonatomic,readwrite)CGRect rippedRect;
@property(nonatomic,readwrite)float originalY;

-(id) initWithRect:(CGRect) rect;

@end
