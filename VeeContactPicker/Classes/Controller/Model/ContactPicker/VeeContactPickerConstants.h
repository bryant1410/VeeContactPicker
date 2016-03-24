//
//  Created by Andrea Cipriani on 14/03/16.
//  Copyright © 2016 Code Atlas SRL. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

@interface VeeContactPickerConstants : NSObject

+(instancetype)sharedInstance; //Initalize with default constants

#pragma mark - Table view Constants

@property (nonatomic,copy) NSString* veeContactCellNibName;
@property (nonatomic,copy) NSString* veeContactCellIdentifier;
@property (nonatomic,assign) NSUInteger veeContactCellHeight;

#pragma mark - VeeContactPicker Appearance Constants

@property (nonatomic,strong) UIColor* cancelBarButtonItemTintColor;
@property (nonatomic,strong) UIColor* navigationBarTintColor;
@property (nonatomic,strong) UIColor* navigationBarBarTintColor;
@property (nonatomic,assign) BOOL navigationBarTranslucent;

#pragma mark - VeeContactTableViewCell Appearance Constants

@property (nonatomic,strong) NSNumber* veeContactCellImageDiameter;
@property (nonatomic,strong) UIFont* veeContactCellPrimaryLabelFont;
@property (nonatomic,strong) UIFont* veeContactCellSecondaryLabelFont;
@property (nonatomic,strong) UIColor* veeContactCellBackgroundColor;
@property (nonatomic,strong) UIColor* veeContactCellBackgroundColorWhenSelected;

@end