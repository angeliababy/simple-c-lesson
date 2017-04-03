//
//  list.hpp
//  simple-list
//
//  Created by Hongwei

//  Copyright © 2017年 Hongwei

//

#ifndef list_hpp
#define list_hpp


#include <stdio.h>
typedef int Elemtype;
typedef struct Node
{
    Elemtype data;
    char tmp[1 * 1024 * 1024];
    Node *next;
}Linknode,*Linklist;

int init(Linklist L);
int clear(Linklist L);
int Empty(Linklist L);
int Length(Linklist L);
int add(Linklist L,int i,Elemtype e);
int remove(Linklist L,int i,Elemtype *e);
int Traverse(Linklist L);
int Locate(Linklist L,Elemtype e);
int Getelem(Linklist L,int i,Elemtype *e);
int Create(Linklist L);
int Destroy(Linklist );

#endif /* list_hpp */
