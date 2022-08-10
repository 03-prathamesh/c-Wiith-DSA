#include<iostream>
using namespace std;

void fun1(){

  cout<<"GFG"<<endl;
  fun1();      //recursion(function calls itself)
}

//it keeps on calling itself. there is no termiinating condition 
// so GFG  getting printed n times there is no stopping or terminating condition


int main()
{

fun1();   //function call

   return 0;
 }