//program to demonstrate the concept of reference to an array

#include<iostream>
using namespace std;

int main()
{
 int arr[4] = {10,20,30,40};
 int (&brr)[4] = arr;
 
 cout<<arr[0]<<"\t"<<brr[0];
 cout<<"\n";
 cout<<arr[1]<<"\t"<<brr[1];
 
return 0;
}
/*
output
10      10
20      20
*/