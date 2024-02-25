/*
1. insert function
This method, as the name suggests, inserts an element at specific position, in a list. There are 3 variations of insert(), they are as follows :

insert(iterator, element) : inserts element in the list before the position pointed by the iterator.
insert(iterator, count, element) : inserts element in the list before the position pointed by the iterator, count number of times.
insert(iterator, start_iterator, end_iterator): insert the element pointed by start_iterator to the element pointed by end_iterator before the position pointed by iterator

*/

#include <iostream>
#include <list>

using namespace std;
int main()
{
    list<int> l = {1,2,3,4,5};
    list<int>::iterator it = l.begin();           
    
    l.insert (it+1, 100);    // insert 100 before 2 position
    /* now the list is 1 100 2 3 4 5 */
    
    list<int> new_l = {10,20,30,40};   // new list
    
    new_l.insert (new_l.begin(), l.begin(), l.end());
    /* 
        insert elements from beginning of list l to end of list l 
        before 1 position in list new_l */
    
    /* now the list new_l is 1 100 2 3 4 5 10 20 30 40 */
    
    l.insert(l.begin(), 5, 10);  // insert 10 before beginning 5 times
    /* now l is 10 10 10 10 10 1 100 2 3 4 5 */
    
    return 0;
}


