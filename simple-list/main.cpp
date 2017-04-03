//
//  main.cpp
//  simple-list
//
//  Created by Hongwei

//  Copyright © 2017年 Hongwei

//

#include <iostream>
#include "list.hpp"



int main(int argc, const char * argv[]) {
    Linklist list;
    list=(Linknode *)malloc(sizeof(Linknode));
    
    init(list);
    
    add(list, 1, 2);
    add(list, 1, 3);
    add(list, 1, 2);
    add(list, 1, 6);
    add(list, 1, 4);
    
    int total = 10240;
    for(int i = 0;i < total; ++i){
        add(list, 1, i);
    }
    
//    
//    Elemtype *number;
//    number=(Elemtype *)malloc(sizeof(Elemtype));
//    remove(list,1,number);
//    
//    Traverse(list);
    
//    clear(list);
    
    std::cout<<"length:"<<Length(list)<<std::endl;
    clear(list);
    std::cout<<"length:"<<Length(list)<<std::endl;
    
    total = 10;
    for(int i = 0;i < total; ++i){
        add(list, 1, i);
    }
    std::cout<<"length:"<<Length(list)<<std::endl;
    getchar();
    
    std::cout<<"no 0 is empty:"<<Empty(list)<<std::endl;
    
    return 0;
}
