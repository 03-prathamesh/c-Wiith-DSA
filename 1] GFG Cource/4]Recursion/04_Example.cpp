#include<iostream>
using namespace std;

 void fun(int  p,int n){

   if(p>n){


       return;

   }
  
  cout<<"FAMILY(God)"<<endl;
   fun(p+1,n);

 

 }


int main()
{

 fun(1,3);
   return 0;
 }