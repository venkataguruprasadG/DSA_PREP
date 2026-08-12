#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> array;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        array.push_back(num);
    }

    int target;
    cin >> target;

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int middle_element = (start + end) / 2;
        if (array[middle_element] == target)
        {
            cout << "Element found at index: " << middle_element << endl;
            return 0;
        }
        else if (array[middle_element] < target)
        {
            start = middle_element + 1;
        }
        else
        {
            end = middle_element - 1;
        }
    }
    cout << "Element not found" << endl;
    return 1;
}