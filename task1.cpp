#include<iostream>
using namespace std;

main()
{
    int rows;
    cout<<"enter no of rows to print asterik: ";
    cin>>rows;
for(int i=1;i<=rows;i++)
{
for(int j=1;j<=i;j++)
{
    cout<<"*";
}
cout<<endl;
}

    
}