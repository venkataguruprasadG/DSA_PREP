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

    first->data = 6;
    first->next = second;

    second->data = 10;
    second->next = NULL;
}