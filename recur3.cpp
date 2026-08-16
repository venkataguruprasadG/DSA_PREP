#include <iostream>
using namespace std;

int sumElement(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return n + sumElement(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << sumElement(n) << endl;
}