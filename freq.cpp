#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int find;
    cin >> find;

    int count = 0;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == find)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}