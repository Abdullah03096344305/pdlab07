#include <iostream>
using namespace std;

main()
{
    int no, n1;
    float p1=0;
    float p2=0;
    float p3=0;
    cout << "enter a number: ";
    cin >> no;
    for (int i = 1; i <= no; i++)
    {
        cout << "enter number: ";
        cin >> n1;
        if (n1 % 2 == 0)
        {
            p1++;
        }
        if (n1 % 3 == 0)
        {
            p2++;
        }
        if (n1 % 4 == 0)
        {
            p3++;
        }
    }
    p1 = (p1 * 100) / no;
    p2 = (p2 * 100) / no;
    p3 = (p3 * 100) / no;
    cout << "p1 = " << p1 <<"% "<< endl;
    cout << "p2 = " << p2 <<"% "<< endl;
    cout << "p3 = " << p3 <<"% "<< endl;
}