//
//  ViewController.h
//  MPCDemo
//
//  Created by yi suo on 9/19/18.
//  Copyright © 2018 Team SparklingNodes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *txtGuess;
@property (weak, nonatomic) IBOutlet UITextView *tvHistory;
@property (weak, nonatomic) IBOutlet UIButton *btnSend;
@property (weak, nonatomic) IBOutlet UIButton *btnCancel;

- (IBAction)startGame:(id)sender;
- (IBAction)sendGuess:(id)sender;
- (IBAction)cancelGuessing:(id)sender;


@end

