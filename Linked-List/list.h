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
};