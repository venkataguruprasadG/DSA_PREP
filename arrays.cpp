#include <iostream>
using namespace std;

int main()
{
    int array[5];

    int maximum;
    int minimum;

    int num;
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        array[i] = num;
    }

    for (int j = 4; j >= 0; j--)
    {
        cout << array[j] << " ";
    }

    cout << endl;

    maximum = array[0];
    minimum = array[0];

    for (int k = 0; k < 5; k++)
    {
        if (array[k] > maximum)
        {
            maximum = array[k];
        }
        if (array[k] < minimum)
        {
            minimum = array[k];
        }
    }

    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;
}