#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int linearSearch(vector<int> &arr, int data)
{
    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] == data)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 4, 10, 40};
    int data = 10;

    cout << linearSearch(arr, data);
}