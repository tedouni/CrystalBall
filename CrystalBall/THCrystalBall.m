//
//  THCrystalBall.m
//  CrystalBall
//
//  Created by Tayseer Edouni on 7/4/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#import "THCrystalBall.h"

@implementation THCrystalBall

-(NSArray *) predictions
{
    if (_predictions == nil)
    {
        _predictions = [[NSArray alloc]initWithObjects:@"It is certain",@"It is decidely so",
                        @"All signs say yes",
                        @"The stars are not aligned",
                        @"My reply is no",
                        @"It is doubtful",
                        @"Better not tell you now",
                        @"Concentrate and ask again",
                        @"Unable to answer", nil];
    }
    
    return _predictions;
}
-(NSString*) randomPredition
{
    int random = arc4random_uniform(self.predictions.count);
    
    return [self.predictions objectAtIndex:random];
}

@end
