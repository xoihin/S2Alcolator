//
//  ViewController.h
//  SeAlcolator
//
//  Created by Xoi Hin on 2015-09-19.
//  Copyright (c) 2015 Xoi Hin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;




- (IBAction)textFieldDidChange:(UITextField *)sender;
- (IBAction)sliderValueDidChange:(UISlider *)sender;
- (IBAction)buttonPressed:(UIButton *)sender;
- (IBAction)tapGestureDidFired:(UITapGestureRecognizer *)sender;



@end

