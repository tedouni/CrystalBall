//
//  THCrystalBall.h
//  CrystalBall
//
//  Created by Tayseer Edouni on 7/4/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface THCrystalBall : NSObject
{
    NSArray *_predictions;
}
@property (strong, nonatomic, readonly) NSArray *predictions;

-(NSString*) randomPredition;
@end
