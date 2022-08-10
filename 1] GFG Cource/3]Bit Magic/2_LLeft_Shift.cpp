#include<iostream>
using namespace std;

int main()
{


 int x=3;

 /*
128  64  32   16   8   4   2    1


0    0    0    0   0    0   1   1


 */

 cout<<(x<<1)<<endl;  // x(3) left shift 1
 cout<<(x<<2)<<endl;  // x left shift 2

 int y=4;
 cout<<(x<<y)<<endl;  // x left shift y(ie 4).




   return 0;
 }