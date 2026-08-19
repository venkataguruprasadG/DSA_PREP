#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

bool isFull(int top)
{
    if (top == MAX_SIZE - 1)
    {
        return true;
    }
}

bool isEmpty(int top)
{
    if (top == -1)
    {
        cout << "Its Empty" << endl;
        return true;
    }
}

void peek(int stack[], int top)
{
    if (top == -1)
    {
        cout << "Ntg to display" << endl;
        return;
    }

    cout << stack[top] << endl;
}

void display(int stack[], int top)
{
    if (top == -1)
    {
        cout << "there are no elements to display";
        return;
    }

    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << " ";
    }
    cout << endl;
}

void push(int stack[], int &top, int num)
{
    if (isFull(top))
    {
        cout << "There is no space to add any elements into the stack";
        return;
    }

    top++;
    stack[top] = num;
}

void pop(int stack[], int &top)
{
    if (top == -1)
    {
        cout << "There is ntg to remove" << endl;
        return;
    }

    top--;
}

int main()
{
    int stack[5];
    int top = -1;

    push(stack, top, 10);
    push(stack, top, 25);
    push(stack, top, 15);
    push(stack, top, 5);

    display(stack, top);

    peek(stack, top);

    pop(stack, top);

    display(stack, top);

    isFull(top);

    isEmpty(top);
}