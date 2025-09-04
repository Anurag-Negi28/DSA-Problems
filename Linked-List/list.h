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
};