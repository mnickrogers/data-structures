# Linked List

The linked list is a simple data structure representing a series of nodes connected (linked) together. In this case, nodes are represented as template classes containing some data, a previous node and a next node. The linked list template class keeps track of the start and end nodes for the linked list, allowing us to quickly navigate the list. 

Linked lists can be helpful in different algorithmic problems as well as for building more elaborate data structures. For example, closed addressing can store hashed items in linked lists to avoid collisions.

## Inserting

Nodes can be inserted into the linked list by simply creating a node and pushing it back in the list:

``` 
auto *node = new Node<Int>(13);
list->push_back(node);
```
### Deleting

Deleting the linked list automatically deletes the nodes. This behavior is just part of the implementation of this specific linked list and can be changed fairly easily. 
