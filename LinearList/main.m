//
//  main.m
//  LinearList
//
//  Created by  Jacky on 18/1/9.
//  Copyright © 2018年 Song Guoxiang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LinearList.h"

/*
 栈:
 1.通过局部变量临时存放数据的
 2.栈空间的生命周期不由我们程序员控制
 
 堆:
 1.通过malloc函数申请内存空间
 2.通过free函数销毁之前申请的空间
 */

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        //返回一个结构体!
        LinearList * list = listCreat(10);
        //添加数据
        listAdd(list, 10);
        listAdd(list, 10);
        listAdd(list, 15);
        listAdd(list, 10);
        listInsert(list, 1, 15);
        listAdd(list, 40);
        listInsert(list, 2, 30);
        list->length = 0;
        
        
        //打印数据
        listPrint(list);
        
        listRemoveValue(list, 15);
        listPrint(list);
        
        
        
        
    }
    return 0;
}
