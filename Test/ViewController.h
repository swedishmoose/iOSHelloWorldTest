//
//  ViewController.h
//  Test
//
//  Created by Joseph Benjamin A. Pacia on 4/18/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSStream *userName;

- (IBAction)changeGreeting:(id)sender;

@end
