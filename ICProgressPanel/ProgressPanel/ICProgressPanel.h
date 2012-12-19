//
//  ICProgressPanel.h
//  iCook
//
//  Created by Edward Chiang on 12/12/17.
//  Copyright (c) 2012年 Polydice, Inc. All rights reserved.
//

/*
 Copyright (C) 2012 Edward Chiang
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


#import <UIKit/UIKit.h>

typedef void(^progressDidFinishLoadBlock)(void);
typedef void(^progressDidCancelLoadBlock)(void);

@interface ICProgressPanel : UIView

@property (nonatomic, assign) CGFloat percentage;
@property (nonatomic, strong) UIImageView *thumbImageView;
@property (nonatomic, strong) UIButton *cancelButton;
@property (nonatomic, strong) UIButton *doneButton;
@property (nonatomic, strong) NSMutableArray *progressImageViews;
@property (nonatomic, strong) UIActivityIndicatorView *waitingView;


+ (ICProgressPanel *)showPanelInView:(UIView *)view didFinishLoad:(progressDidFinishLoadBlock)finishBlock cancel:(progressDidCancelLoadBlock)cancelBlock;

+ (ICProgressPanel *)sharedInstance;

- (void)show;

- (void)done;

- (void)hide;

@end
