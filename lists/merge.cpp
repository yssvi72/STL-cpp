/*Merges two sorted list. It is mandatory that both the list should be sorted first. merge() merges the two list such that each element is placed at its proper position in the resulting list. Syntax for merge is list1.merge(list2).*/

#include <iostream>
#include <list>

using namespace std;
int main ()
{
    list<int> list1 = {1,3,5,7,9};
    list<int> list2 = {2,4,6,8,10};
    
    /* both the lists are sorted. In case they are not , 
    first they should be sorted by sort function() */
    
    list1.merge(list2);
    
    /* list list1 is now 1,2,3,4,5,6,7,8,9,10  */
    
    cout << list1.size() << endl;    // prints 10 
}
