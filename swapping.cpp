#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 56, 0, 34, 5};
    int temp;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 0)
        {
            temp = arr[i];
            arr[i] = arr[0];
            arr[0] = temp;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}