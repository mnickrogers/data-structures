import Foundation

class Node<T>: Linkable
{
    var previous: Linkable?
    var next: Linkable?
    
    var data: T?
    
    init(data: T)
    {
        self.data = data
    }
}

var n1 = Node(data: 1)
var n2 = Node(data: 2)
var n3 = Node(data: 3)

let linkedList = LinkedList<Node<Int>>()

linkedList.push(node: &n1)
linkedList.push(node: &n2)
linkedList.push(node: &n3)

linkedList.walk()
