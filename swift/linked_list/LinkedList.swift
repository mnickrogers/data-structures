import Foundation

class LinkedList<Element: Linkable>
{
    internal var firstNode: Element?
    {
        return start
    }
    internal var lastNode: Element?
    {
        return end
    }
    
    private var start: Element?
    private var end: Element?
    
    internal func push(node newNode: inout Element)
    {
        if start == nil
        {
            start = newNode
            end = newNode
        }
        else
        {
            end!.next = newNode
            newNode.previous = end
            end = newNode
        }
    }
    
    internal func walk()
    {
        guard start != nil
            else { return }
        
        var next: Linkable? = start
        
        while next != nil
        {
            print(next as Any)
            next = next!.next
        }
    }
}
