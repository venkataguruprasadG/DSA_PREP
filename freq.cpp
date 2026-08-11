#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int num;
    int find;
    cin >> find;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num == find)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}