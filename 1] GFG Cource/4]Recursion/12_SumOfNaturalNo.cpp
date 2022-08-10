#include<bits/stdc++.h>
using namespace std;


 int Sum(int n ){


   if(n==1){



    return 1;
   }
    

    return n+Sum(n-1);



 }


int main()
{
    

  cout<<"Enter the number:"<<endl;
  int x;
  cin>>x;

 cout<<Sum(x);


   return 0;
}