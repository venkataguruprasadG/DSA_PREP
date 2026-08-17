#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector = {1, 2, 3, 4, 5};
    int k = 3;

    int total = 0;

    int max_sum = 0;

    for (int i = 0; i < k; i++)
    {
        total += myVector[i];
    }

    max_sum = total;

    int l = 0;

    for (int j = k; j < myVector.size(); j++)
    {
        total = total - myVector[l];
        total = total + myVector[j];
        l++;

        max_sum = max(max_sum, total);
    }

    cout << max_sum;
}