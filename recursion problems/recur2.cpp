#include <iostream>
using namespace std;

void printElement(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " " << endl;
    printElement(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printElement(n);
}