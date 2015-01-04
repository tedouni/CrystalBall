//
//  TEViewController.h
//  CrystalBall
//
//  Created by Tayseer Edouni on 6/28/14.
//  Copyright (c) 2014 Tayseer Edouni. All rights reserved.
//

#import <UIKit/UIKit.h>
@class THCrystalBall;

@interface TEViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) THCrystalBall *crystalBall;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

-(void) makePrediction;
@end
