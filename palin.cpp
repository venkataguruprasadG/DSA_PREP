#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            cout << "Not a palindrome" << endl;
            return 0;
        }
    }
    cout << "Palindrome" << endl;
    return 0;
}