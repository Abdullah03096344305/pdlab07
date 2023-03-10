#include<iostream>
using namespace std;

main()
{
int no,n1;
cout<<"enter a number: ";
cin>>no;
int sum=0;
int a=0;

for (int i = 1; i <= no; i++)
{
   cout<<"enter number: ";
   cin>>n1;
   if (n1<=3)
   {
    a=a+n1;
    cout<<"a"<<a;

   }
   if (n1>3 && n1<=11)
   {
    
   }
   if (n1>11)
   {
     
   }
    sum=sum+n1;  
}
   cout<<"sum= "<<sum<<endl;

    
}