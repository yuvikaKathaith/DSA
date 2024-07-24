#include <iostream>
using namespace std;
int main()
{
    int arr[3][2];
    // another way of initialising

    int arr[3][4] = {{1, 2, 3, 4}, {1, 3, 5, 7}, {2, 4, 6, 8}};

    cout << "enter elements ";
    //   taking row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cin >> arr[row][col];
        }
    }
    //taking col wise input
    for (int col = 0; col < 2; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[col][row];
        }
    }

    // output array matrix
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}