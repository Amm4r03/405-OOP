#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    // constructor
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList
{
    private : 
        Node* head;
    public : 
        LinkedList() : head(nullptr) {}

        void insert(int value)
        {
            Node* newnode = new Node(value);
            newnode ->next = head;
            head = newnode;
        }

        void display()
        {
            Node* current = head;
            while (current != nullptr)
            {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
};

int main()
{
    LinkedList l1;

    l1.insert(21);
    l1.insert(12);
    l1.insert(2);

    cout << "linked list : ";
    l1.display();
    return 0;
}