#include <iostream>
#include "list.h"
using namespace std;

void print(list &lst)
{
    Node *head = lst.begin();
    while (head != nullptr)
    {
        cout << head->getData() << "->";
        head = head->next;
    }
}

int main()
{
    list lst;
    lst.push_front(1);
    lst.push_front(5);
    lst.push_back(0);
    lst.push_back(6);
    lst.insert(3, 2);
    print(lst);
    cout << endl
         << 0 << " is at index "
         << lst.search(0);
    return 0;
}