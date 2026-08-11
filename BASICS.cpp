#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of number terms you want to see the sum of. ";

    cin >> n;

    int result = 0;

    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    cout << "Sum of n numbers: " << result << endl;
    return 0;
}