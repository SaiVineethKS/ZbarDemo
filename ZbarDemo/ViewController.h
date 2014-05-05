//
//  ViewController.h
//  ZbarDemo
//
//  Created by NCXT on 29/04/2014.
//  Copyright (c) Năm 2014 NCXT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBarSDK.h"

@interface ViewController : UIViewController<ZBarReaderDelegate>
@property (weak, nonatomic) IBOutlet UILabel *resultTextView;
@property (weak, nonatomic) IBOutlet UIImageView *resultImageView;
- (IBAction)startScanning:(id)sender;

@end
