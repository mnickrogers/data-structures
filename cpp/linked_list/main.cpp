//
//  main.cpp
//  linked_list
//
//  Created by Nicholas Rogers on 7/23/19.
//  Copyright © 2019 Nicholas Rogers. All rights reserved.
//

#include <iostream>
#include "linked_list.hpp"

int main(int argc, const char * argv[])
{
    
    auto *list = new LinkedList<int>;
    
    auto *node1 = new Node<int>(1);
    auto *node2 = new Node<int>(2);
    auto *node3 = new Node<int>(3);
    
    list->push_back(node1);
    list->push_back(node2);
    list->push_back(node3);
    
    list->walk_list();
    
    delete list;
    
    return 0;
}
