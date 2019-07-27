import Foundation

protocol Linkable
{
    var previous: Linkable? {get set}
    var next: Linkable? {get set}
}
