//
//  list.cpp
//  simple-list
//
//  Created by Hongwei

//  Copyright © 2017年 Hongwei

//


#include<iostream>
using namespace std;
#include "list.hpp"
#include<stdlib.h>
int init(Linklist L)  //初始化
{
    if(!L)
        return -1;
    L->next=NULL;
    return 0;
}

int clear(Linklist L)  //清空链表
{
    Linknode *p,*tem;
    p=L->next;
    while(p)
    {
        tem=p;
        free(tem);
        p=p->next;
    }
    L->next=NULL;
    return 0;
}

int Empty(Linklist L)  //测试为空
{
    if(!L)
        return -1;
        return (L->next==NULL);
}

int Length(Linklist L) //长度
{
    Linknode *p;
    p=L->next;
    int i=0;
    while(p)
    {
        i++;
        p=p->next;
    }
    return i;
}

int add(Linklist L,int pos,Elemtype data)  //插入
{
    Linknode *pre,*insert;
    insert=(Linknode *)malloc(sizeof(Linknode));
    int j;
    pre=L;
    for(j=1;j<pos;j++)
        pre=pre->next;
    insert->next=pre->next;
    pre->next=insert;
    insert->data=data;
    return 0;
}

int remove(Linklist L,int i,Elemtype *number)
{
    Linknode *pre;
    int j;
    pre=L;
    for(j=1;j<i;j++)
        pre=pre->next;
    *number=pre->next->data;
    pre->next=pre->next->next;
    return 0;
}

int Traverse(Linklist L)
{
    Linknode *p;
    p=L->next;
    cout<<"data:";
    while(p)
    {
        cout<<p->data<<",";
        p=p->next;
    }
    cout<<endl;
    return 0;
}




