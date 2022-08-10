#include<iostream>
using namespace std;

void rec(int  i,int  n){    //rec(int n );

  if(i>n){   //if(n==0)


      return;
  }
  
  cout<<"GOD(FAMILY)"<<endl;


  rec(i+1,n);   //rec(n);





}


int main()
{

int c;
cout<<"Enter a Number: "<<endl;
cin>>c;

rec(1,c);   //rec(c);

   return 0;
 }