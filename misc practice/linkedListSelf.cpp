// writing code for a linked list in cpp on my own

#include <iostream>
using namespace std;

typedef struct{
    int data;
    Node* next;
} Node;

class linkedList
{
    public:
    Node* head;

    void insert(int value);
    void display(void);
    void insertAtEnd(int value);
};

Node* createNode(int value)
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}

void linkedList::insert(int value)
{
    Node* newNode = createNode(value);
    
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head = newNode;
        return;
    }
}

void linkedList::display(void)
{
    Node* traverse = head;
    while (traverse != nullptr)
    {
        printf("%d ",traverse->data);
    }
    printf("\n");
}

void linkedList::insertAtEnd(int value)
{
    Node* newNode = createNode(value);

    if (head == NULL)
    {
        head = newNode;
    }
    else{
        Node* traverse = head;
        
        while(traverse->next != nullptr)
        {
            traverse = traverse->next;
        }

        traverse->next = newNode;
        return;
    }
}

int main()
{
    linkedList l1;

    l1.insert(21);
    l1.insert(2);


    return 0;
}