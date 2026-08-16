#include <iostream>
using namespace std;

void printElements(int num)
{
    if (num == 0)
    {
        return;
    }

    printElements(num - 1);

    cout << num << " " << endl;
}

int main()
{
    int number;
    cin >> number;
    printElements(number);
}