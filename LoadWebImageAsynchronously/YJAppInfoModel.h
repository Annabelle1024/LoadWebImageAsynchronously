//
//  YJAppInfoModel.h
//  LoadWebImageAsynchronously
//
//  Created by Annabelle on 16/5/28.
//  Copyright © 2016年 annabelle. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YJAppInfoModel : NSObject

// 按照Json数据中的键值来定义模型属性
// 名称
@property (nonatomic, copy) NSString *name;

// 下载
@property (nonatomic, copy) NSString *download;

// 图像
@property (nonatomic, copy) NSString *icon;

/*!
 *  保存网络下载的图像
 */
@property (nonatomic, strong) UIImage *image;
@end
