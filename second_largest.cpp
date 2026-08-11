#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (num > largest)
        {
            second_largest = largest;
            largest = num;
        }
        else if (num > second_largest && num != largest)
        {
            second_largest = num;
        }
    }
    cout << second_largest << endl;
    return 0;
}