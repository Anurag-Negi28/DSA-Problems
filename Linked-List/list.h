#include <iostream>
using namespace std;
// Header file for Linked List using Objects and classes
class list; // Forward Declaration
class Node
{
    // Private Data members
    int data;

public:
    Node *next;
    Node(int data) : data(data), next(nullptr) {}
    // Getter Function
    int getData()
    {
        return data;
    }
    friend class list; // lsit class can use private member functions of Node class
    // Destructor
};
class list
{
    Node *head;
    Node *tail;

public:
    list() : head(nullptr), tail(nullptr) {}
    // function of node to get start of the linked list
    Node *begin()
    {
        return head;
    }
    void push_front(int data)
    {
        if (head == nullptr)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }
    void push_back(int data)
    {
        if (head == nullptr)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }
    void insert(int data, int pos)
    {
        Node *temp = head;
        for (int jump = 0; jump < pos - 1; jump++)
        {
            temp = temp->next;
        }
        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
    int search(int key)
    {
        Node *temp = head;
        int idx = 0;
        while (temp != nullptr)
        {
            if (temp->data == key)
            {
                return idx;
            }
            idx++;
            temp = temp->next;
        }
        return -1;
    }
    // Destructor
    /*
    ~list()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << "Node deleted " << temp->getData() << endl; // print before deleting for forward order
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
        head = tail = nullptr;
    }
    */
    void pop_front()
    {
        if (head == nullptr)
            return;
        Node *temp = head;
        head = head->next;
        delete temp;
        if (head == nullptr)
            tail = nullptr;
    }
    void pop_back()
    {
        if (head == nullptr)
            return;
        if (head == tail)
        {
            delete head;
            head = tail = nullptr;
            return;
        }
        Node *prev = head;
        while (prev->next != tail)
        {
            prev = prev->next;
        }
        delete tail;
        tail = prev;
        tail->next = nullptr;
    }
    void remove(int pos)
    {
        // If empty list
        if (head == nullptr)
            return;
        Node *prev = head;
        // prev is the node before the target
        for (int i = 1; i < pos - 1 && prev->next != nullptr; i++)
        {
            prev = prev->next;
        }
        Node *target = prev->next;
        if (target == nullptr) // pos out of range
            return;
        prev->next = target->next;
        if (target == tail)
        {
            tail = prev;
        }
        target->next = nullptr;
        delete target;
    }
};