#include<iostream>
using namespace std;

void kisSet(int n, int k){

  if(n&(1<<(k-1))!=0)
{

    cout<<"Yes"<<endl;
}
else{

    cout<<"No"<<endl;
}

}



int main()
{

int n;
cout<<"Enter The Value of n: "<<endl;
cin>>n;

int k;
cout<<"Enter the number of k: "<<endl;
cin>>k;


kisSet(n,k);

   return 0;
 }