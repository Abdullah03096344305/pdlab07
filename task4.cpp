#include <iostream>
using namespace std;

main()
{
    int no, a;
    cout << "enter a number: ";
    cin >> no;
    for (int i = 1; i <= no; i++)
    {

        if (i % 4 == 0)
        {
            a = i * 10;
            cout  << a <<" ";
        }
        else
        {
            cout   << i << " ";
        }
    }
}