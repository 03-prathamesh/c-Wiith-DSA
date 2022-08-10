#include<iostream>
using namespace std;

void fun1(){

cout<<"Func1"<<endl;

}

void fun2(){

cout<<"Before Fun1"<<endl;

fun1();   //recursion func2 calls fun1 ie function is calling other functiion

cout<<"After Fun1"<<endl;

}



int main()
{

 cout<<"Before Fun2"<<endl;

 fun2();    //function call for the fun2();

 cout<<"After fun2"<<endl;



   return 0;
 }