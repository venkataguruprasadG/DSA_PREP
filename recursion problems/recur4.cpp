#include <iostream>
using namespace std;

void search(int n)
{
    if (n < 0)
    {
        return;
    }
    if (n % 2 == 0)
    {
        search(n - 1);
    }
    if (n % 2 != 0)
    {
        return;
    }
}

int main()
{
    int n;
    cin >> n;
    search(n);
}