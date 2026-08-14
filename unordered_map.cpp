#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> myMap;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        myMap[element]++;
    }

    for (auto value : myMap)
    {
        cout << "Element: " << value.first << ", Count: " << value.second << endl;
    }
    return 0;
}