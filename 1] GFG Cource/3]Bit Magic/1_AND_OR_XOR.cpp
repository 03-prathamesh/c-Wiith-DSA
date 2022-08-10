#include<iostream>
using namespace std;

int main()
{

int x=3,y=6;

/*
          8    4     2      1
x=3       0    0     1      1

x=6       0    1     1      0
*/  
cout<<"Bitwise &= "<<(x&y)<<endl;   // bitwise & gives output as 1 only if both the inputs are 1 
cout<<"Bitwise |= "<<(x|y)<<endl;   // bitwiise | or gives output 1 when any of the input bits are 1
cout<<"Bitwise ^= "<<(x^y)<<endl;  //  bitwise ^ (XOR)operator gives output as 1 if both the bits are different

   return 0;
 }