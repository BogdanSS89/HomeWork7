#include <iostream>
namespace MyLib
{
    using namespace std;
    void InitArr(int arr[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = rand();
        }
        cout << endl;
    }
    void printArray( int arr[], int size)
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl << endl;
    }
}
