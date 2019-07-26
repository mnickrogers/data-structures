//
//  linked_list.hpp
//  linked_list
//
//  Created by Nicholas Rogers on 7/23/19.
//  Copyright © 2019 Nicholas Rogers. All rights reserved.
//

#ifndef linked_list_hpp
#define linked_list_hpp

#include <iostream>
#include "node.hpp"

template <class T>
class LinkedList
{
    
public:
    
    LinkedList()
    {
        _start = _end = nullptr;
    }
    
    ~LinkedList()
    {
        Node<T> *next = _start;
        while (next != nullptr)
        {
            auto *temp = next->get_next();
            delete next;
            next = temp;
        }
    }
    
    void push_back(Node<T> * new_node)
    {
        // Two conditions. Either this is the first element, in which case it will be both the
        // the start and the end or it's not the first element and will be appended to the end.
        
        if (_start == nullptr)
        {
            _start = _end = new_node;
        }
        else
        {
            _end->set_next(new_node);
            new_node->set_previous(_end);
            _end = new_node;
        }
    }
    
    void insert_after(Node<T> * old_node, Node<T> * new_node)
    {
        new_node->set_next(old_node->get_next());
        
        if (old_node->get_next() != nullptr)
            old_node->get_next()->set_previous(new_node);
        
        new_node->set_previous(old_node);
        old_node->set_next(new_node);
    }
    
    void walk_list() const
    {
        auto *next = _start;
        while (next != nullptr)
        {
            std::cout << " -> " << next->get_data();
            next = next->get_next();
        }
        std::cout << std::endl;
    }
    
private:
    
    Node<T>             *   _start;
    Node<T>             *   _end;
    
};

#endif /* linked_list_hpp */
