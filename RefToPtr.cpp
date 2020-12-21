//program for reference to the pointer

#include<iostream>
using namespace std;

int main()
{
int no = 11;
int *p = &no;          
int *(&ref) = p;     //int &ref = *p;     --->invalid syntax(it print different adress of ref ----->Adress of ref is  0x61ff08)

cout<<"value of *p is"<<"\t"<<*p<<"\n";
cout<<"value of *ref is"<<"\t"<<*ref<<"\n";
cout<<"\n";
cout<<"Adress of p is"<<"\t"<<&p<<"\n";
cout<<"Adress of ref is"<<"\t"<<&ref<<"\n";

return 0;
}
/*output
value of *p is  11
value of *ref is 11

Adress of p is  0x61ff04
Adress of ref is        0x61ff04
*/