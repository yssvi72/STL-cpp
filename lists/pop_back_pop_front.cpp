//pop_front() removes first element from the start of the list. While pop_back() removes first element from the end of the list.
#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l{1,2,3,4,5};
    
    l.pop_back()();
    /* now the list becomes 1,2,3,4 */
    
    l.pop_front()();
    /* now the list becomes 2,3,4 */
}
