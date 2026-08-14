#include <iostream>
#include <vector> // 1. Added vector header
using namespace std;

int main()
{
    // 2. Changed from primitive array to vector
    vector<int> arr = {1, 2, 4, 7, 10, 15};

    int target;
    cin >> target;

    // 3. arr.size() now works flawlessly!
    for (int i = 0, j = arr.size() - 1; i < j;)
    {
        int sum = arr[i] + arr[j];

        if (sum == target)
        {
            cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
            return 0;
        }
        else if (sum < target)
        {
            i++;
        }
        else if (sum > target)
        {
            j--;
        }
    }

    cout << "No pair found." << endl;
    return 0;
}
