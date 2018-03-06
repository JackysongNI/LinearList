//
//  LinearList.h
//  LinearList
//
//  Created by  Jacky on 18/1/9.
//  Copyright © 2018年 Song Guoxiang. All rights reserved.
//

#ifndef LinearList_h
#define LinearList_h

#include <stdio.h>

typedef int LinearListNodeValue;

// 线性表
typedef struct {

    int capacity;//容量
    int length;//长度
    LinearListNodeValue * value;//节点数据的指针
}LinearList;

/**定义一个函数创建线性表*/
LinearList *listCreat(int capacity);
/**销毁线性表*/
void listReleas(LinearList * list);
/**清空线性表*/
void listClear(LinearList * list);
/**获取线性表的长度*/
int listLength(LinearList * list);
/**获取index对应的数据*/
LinearListNodeValue listGet(LinearList * list,int index);
/**插入数据*/
void listInsert(LinearList * list, int index,LinearListNodeValue value);
/**添加数据*/
void listAdd(LinearList * list,LinearListNodeValue value);
/**设置元素*/
void listSet(LinearList * list,int index,LinearListNodeValue value);
/**删除元素*/
void listRemove(LinearList * list,int index);
/**删除某个值的所有数据*/
void listRemoveValue(LinearList * list,LinearListNodeValue value);
/**打印当前线性表*/
void listPrint(LinearList * list);

#endif /* LinearList_h */
