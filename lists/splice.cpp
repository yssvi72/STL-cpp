/* splice function

splice() method transfers the elements from one list to another. There are three versions of splice :
splice(iterator, list_name) : Transfers complete list list_name at position pointed by the iterator.
splice(iterator, list_name, iterator_pos) : Transfer elements pointed by iterator_pos from list_name at position pointed by iterator.
splice(iterator, list_name, itr_start, itr_end) : Transfer range specified by itr_start and itr_end from list_name at position pointed by iterator. */

#include <iostream>
#include <list>

using namespace std;

int main ()
{
    list<int> list1 = {1,2,3,4};
    list<int> list2 = {5,6,7,8};
    list<int>::iterator it;
    
    it = list1.begin();
    ++it;   //pointing to second position           
    
    list1.splice(it, list2);
    /* transfer all elements of list2 at position 2 in list1 */
    /* now list1 is 1 5 6 7 8 2 3 4 and list2 is empty */
    
                                          
    list2.splice(list2.begin(), list1, it);
    /* transfer element pointed by it in list1 to the beginning of list2 */
    /* list2 is now 5 and list1 is 1 6 7 8 2 3 4*/
    
    return 0;
}
