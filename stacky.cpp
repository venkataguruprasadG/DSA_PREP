#include <iostream>
using namespace std;

int main()
{
    int stack[5];

    int top = -1;

    top++;
    stack[top] = 10;

    cout << "After 10 -> Top: " << top << endl;

    top++;
    stack[top] = 20;

    cout << "after 20 -> Top: " << top << endl;

    top++;
    stack[top] = 30;

    cout << "after 30 -> Top: " << top << endl;

    return 0;
}