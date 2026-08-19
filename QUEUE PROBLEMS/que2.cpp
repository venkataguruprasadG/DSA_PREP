#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q3;
    q3.push(25);
    q3.push(10);
    q3.push(15);

    while (!q3.empty())
    {
        cout << q3.front() << endl;
        q3.pop();
    }
}