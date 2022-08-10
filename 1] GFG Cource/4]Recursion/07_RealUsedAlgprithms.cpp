#include<iostream>
using namespace std;

int fun(int p){


  if(p==1){


      return 0;
  }
  else{
         

        return 1+fun(p/2);

  }

   


}



int main()
{


   int n;
   cout<<"Enter the value of n: "<<endl;
   cin>>n;

   int p=fun(n);
  
   cout<<p<<endl;


   return 0;
 }