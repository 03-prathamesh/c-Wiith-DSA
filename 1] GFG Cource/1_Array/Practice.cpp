#include<iostream>
using namespace std;

 int Ls(int arr[],int s, int ETS){

     for(int i=0;i<s;i++){


          if(arr[i]==ETS){

            return arr[i];
          }



     }


        cout<<"No any Element Found"<<endl;
       return -1;

        
     }


 



int main()
{

cout<<"Enter the Size of Array: "<<endl;
int n;
cin>>n;

   int a[n];

   for(int i=0;i<n;i++){

         cout<<"Enter the element to add to this Array: "<<endl;
         cin>>a[i];
   }

   int EleToSe;
   cout<<"Enter Element To be Searched."<<endl;
   cin>>EleToSe;


   int size=sizeof(a)/sizeof(a[0]);

 int r=  Ls(a,size,EleToSe);

 cout<<r;
   return 0;
 }