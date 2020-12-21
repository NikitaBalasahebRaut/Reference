//program to demonstrate the concept of multiple references to a single variable

#include<iostream>
using namespace std;

int main()
{
 int x = 11;
 int &ref1 = x;
 int &ref2 = x;
 
 cout<<"value of x is:"<<x<<"\n";
 cout<<"value of ref1 is:"<<ref1<<"\n";
 cout<<"value of ref2 is:"<<ref2<<"\n";
 cout<<"\n";
 cout<<"Adress of x is:"<<&x<<"\n";
 cout<<"Adress of ref1 is:"<<&ref1<<"\n";
 cout<<"Adress of ref2 is:"<<&ref2<<"\n";
return 0;
}

/*output
value of x is:11
value of ref1 is:11
value of ref2 is:11

Adress of x is:0x61ff04
Adress of ref1 is:0x61ff04
Adress of ref2 is:0x61ff04
*/