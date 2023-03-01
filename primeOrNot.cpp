// check whether the given number is prime or not
#include <iostream>
using namespace std;

int main()
{
    int num, count=0;

    cout << "Enter number:";
    cin >> num;

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
    return 0;
}