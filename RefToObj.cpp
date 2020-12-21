//we can also create a reference which refer to the object of a class 

#include<iostream>
using namespace std;

class Demo
{
  public:
        int no1;
		int no2;
		
};
int main()
{
 Demo obj;
 obj.no1 = 11;
 obj.no2 = 21;
 
 Demo &myobj = obj;
 
 cout<<"value of no1 using myobj \t"<<myobj.no1;
 cout<<"value of no2 using myobj \t"<<myobj.no2;
 cout<<"\n";
 cout<<"value of no1 using obj \t"<<obj.no1;
 cout<<"value of no2 using obj \t"<<obj.no2;
 
return 0;
}

/*
output
value of no1 using myobj   11 value of no2 using myobj      21
value of no1 using obj     11 value of no2 using obj        21
*/