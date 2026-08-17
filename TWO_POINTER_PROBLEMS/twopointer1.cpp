#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    int k = 3;
    int total = 0;
    int maxSum = 0;

    // First window
    for (int j = 0; j < k; j++)
    {
        total += arr[j];
    }

    maxSum = total;

    int i = 0;

    // Slide the window
    for (int j = k; j < arr.size(); j++)
    {
        total = total - arr[i];
        total = total + arr[j];

        i++;

        maxSum = max(maxSum, total);
    }

    cout << "Maximum sum = " << maxSum;

    return 0;
}