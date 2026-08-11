#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n; // how many numbers

    int num;
    cin >> num;
    int result = num;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        if (num > result)
        {
            result = num;
        }
    }

    cout << result << endl;

    return 0;
}