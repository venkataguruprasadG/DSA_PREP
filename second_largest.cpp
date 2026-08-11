#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        largest = arr[0];

        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
    }
    cout << second_largest << endl;
    return 0;
}