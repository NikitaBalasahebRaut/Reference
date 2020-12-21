//Program to demonstrate the concept of References 

#include<iostream>
using namespace std;

int main()
{
 int no = 11;
 int &ref = no;
 
 cout<<"value of no:"<<"\t"<<no<<"\n";
 cout<<"value of ref:"<<"\t"<<ref<<"\n";
 
 cout<<"Adress of no is:"<<"\t"<<&no<<"\n";
 cout<<"Adress of ref is:"<<"\t"<<&ref<<"\n";
 
 no++;
 cout<<"After increment valu of no is"<<"\t"<<no<<"\n";
 cout<<"After increment value of ref is:"<<"\t"<<ref<<"\n";
 
return 0;
}

/*
output
value of no:    11
value of ref:   11
Adress of no is:        0x61ff08
Adress of ref is:       0x61ff08
After increment valu of no is   12
After increment value of ref is:        12
*/