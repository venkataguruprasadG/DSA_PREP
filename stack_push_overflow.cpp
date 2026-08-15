#include <iostream>
using namespace std;

const int SIZE = 5;

bool isFull(int top)
{
    return top == SIZE - 1;
}

bool isEmpty(int top)
{
    return top == -1;
}

void push(int stack[], int &top, int value)
{
    if (isFull(top))
    {
        cout << "Stack Overflow" << endl;
        return;
    }

    top++;
    stack[top] = value;
}

int pop(int stack[], int &top)
{
    if (isEmpty(top))
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }

    int value = stack[top];
    top--;

    return value;
}

int main()
{
    int stack[SIZE];
    int top = -1;

    push(stack, top, 10);
    push(stack, top, 20);
    push(stack, top, 30);

    cout << "Popped: " << pop(stack, top) << endl;
    cout << "Popped: " << pop(stack, top) << endl;

    cout << "Is Empty: " << isEmpty(top) << endl;
    cout << "Is Full: " << isFull(top) << endl;

    return 0;
}