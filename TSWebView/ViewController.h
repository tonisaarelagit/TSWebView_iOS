//
//  ViewController.h
//  TSWebView
//
//  Created by admin_user on 7/2/16.
//  Copyright © 2016 WorldStar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import "FLWebViewProvider.h"

@interface ViewController : UIViewController <UIWebViewDelegate, WKNavigationDelegate, WKUIDelegate>

@property (nonatomic) UIView <FLWebViewProvider> *webView;

@end

