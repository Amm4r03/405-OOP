// implementing a simple singly linked list in cpp

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node(int value) : data(value),  next(nullptr) {}
};

class LinkedList
{
    private:
    Node* head;

    public:
        LinkedList() : head(nullptr){}

    void insert(int value)
    {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void display()
    {
        Node* current = head;
        while(current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void insertAtEnd()
    {
        Node* traverse = head;
        while(traverse->next != nullptr)
        {
            traverse = traverse->next;
        }

    }
};

int main()
{
    LinkedList list;

    list.insert(10);
    list.insert(1022);
    list.insert(20);
    list.insert(12);

    cout << "linked list : ";
    list.display();

    return 0;
}