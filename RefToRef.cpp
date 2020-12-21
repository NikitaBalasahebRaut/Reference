//program to demonstrate the concept of reference to reference

#include<iostream>
using namespace std;

int main()
{
 int i = 11;
 int &j = i;
 int &k = j;
 
 cout<<"value of i is:"<<i<<"\n";
 cout<<"value of j is:"<<j<<"\n";
 cout<<"value of k is:"<<k<<"\n";
 cout<<"\n";
 cout<<"Adress of i is:"<<&i<<"\n";
 cout<<"Adress of j is:"<<&j<<"\n";
 cout<<"Adress of k is:"<<&k<<"\n";
 
return 0;
}

/*
output
value of i is:11
value of j is:11
value of k is:11

Adress of i is:0x61ff04
Adress of j is:0x61ff04
Adress of k is:0x61ff04
*/