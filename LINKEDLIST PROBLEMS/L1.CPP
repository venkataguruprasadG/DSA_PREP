#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *first = new Node();

    Node *second = new Node();

    Node *temp = first;

    first->data = 6;
    first->next = second;

    second->data = 10;
    second->next = NULL;

    while (temp != NULL)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }
}