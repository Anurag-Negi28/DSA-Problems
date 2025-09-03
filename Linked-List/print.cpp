#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    list lst;
    lst.push_front(1);
    lst.push_front(5);
    lst.push_back(0);
    lst.push_back(6);
    Node *head = lst.begin();
    while (head != nullptr)
    {
        cout << head->getData() << "->";
        head = head->next;
    }
    return 0;
}