//
//  JPTestContainer.h
//  InstaScript
//
//  Created by tom on 15/6/15.
//  Copyright (c) 2015年 tom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface JPTestContainer : NSObject

- (NSArray *)newEmptyArray;
- (NSArray *)newArray;
- (id)getObjectWithJS:(NSArray *)arr index:(NSInteger)index;
- (id)getObjectWithOC:(NSArray *)arr index:(NSInteger)index;
@end