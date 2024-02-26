/*sort() method sorts the given list. It does not create new sorted list but changes the position of elements within an existing list to sort it. This method has two variations :

sort() : sorts the elements of the list in ascending order, the element of the list should by numeric for this function.
sort(compare_function) : This type of sort() is used when we have to alter the method of sorting. Its very helpful for the elements that are not numeric. 
We can define how we want to sort the list elements in compare_funtion. For example, list of strings can be sorted by the length of the string, it can also be used for sorting in descending order. */

#include <iostream>
#include <list>

using namespace std;

bool compare_function( string& s1 , string& s2 )
{
    return ( s1.length() > s2.length() );
}

int main()
{
    list<int> list1 = {2,4,5,6,1,3};
    list<string> list2 = {"h", "hhh", "hh"};
    
    list1.sort();
    /* list1 is now 1 2 3 4 5 6 */
    
    list2.sort(compare_function);
    /* list2 is now h hh hhh */ 
}
