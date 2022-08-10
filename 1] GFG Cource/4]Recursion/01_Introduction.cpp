#include<iostream>
using namespace std;

void fun1(){



    cout<<"Competative Programmer....."<<endl;

    fun1();    // this function is keep callng itself. there is  no any function call terrmination condition wherrr function callinig itself will stop at some point
               // ie there is no  any base case to stop function call .
}



int main()
{


 fun1();

   return 0;
 }