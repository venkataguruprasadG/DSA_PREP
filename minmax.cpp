#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num;
    cin >> num; // first number
    int result_big = num;
    int result_small = num;

    for (int i = 1; i <= n - 1; i++)
    {
        cin >> num;
        if (num > result_big)
        {
            result_big = num;
        }
        if (num < result_small)
        {
            result_small = num;
        }
    }
    cout << "Largest number is: " << result_big << endl;
    cout << "Smallest number is: " << result_small << endl;
    return 0;
}