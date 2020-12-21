//program to demonstrate the concept of pointer to references

#include<iostream>
using namespace std;

int main()
{
  int no = 11;
  int &ref = no;
  int *p = &ref;

 cout<<"value of *p:"<<"\t"<<*p<<"\n";
 cout<<"value of ref: \t"<<ref<<"\n";
 cout<<"value of no: \t"<<no<<"\n";
 
return 0;
}
/*output
value of *p:    11
value of ref:   11
value of no:    11
*/