//
//  node.hpp
//  linked_list
//
//  Created by Nicholas Rogers on 7/23/19.
//  Copyright © 2019 Nicholas Rogers. All rights reserved.
//

#ifndef node_hpp
#define node_hpp

#include <iostream>

template <class T>
class Node
{
public:
    
    Node()
    {
        _previous = _next = nullptr;
    }
    
    Node(T data)
    {
        _previous = _next = nullptr;
        _data = data;
    }
    
//    ~Node()
//    {
//        delete _data;
//    }
    
    Node<T> * get_next() const
    {
        return _next;
    }
    
    Node<T> * get_previous() const
    {
        return _previous;
    }
    
    void set_next(Node<T> * next)
    {
        _next = next;
    }
    
    void set_previous(Node<T> * previous)
    {
        _previous = previous;
    }
    
    T get_data() const
    {
        return _data;
    }
    
    void set_data(T data)
    {
        _data = data;
    }
    
private:
    
    Node<T>             *   _previous;
    Node<T>             *   _next;
    T                       _data;
};

#endif /* node_hpp */
