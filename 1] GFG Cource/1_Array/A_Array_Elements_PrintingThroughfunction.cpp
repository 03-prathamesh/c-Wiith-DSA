#include<iostream>
#include<algorithm>   //STL Library
using namespace std;

// Yes i am Now changing This
 void Print(int arr[],int size,int p){     // void Print(int * arr,int size){}     //sysntaxfor formal arguments for receiving arrays  

       for(int i=0;i<size;i++){


           cout<<arr[i]<<"  ";

          
       }

     cout<<endl;
   
 }



int main()
{

 int array[]={60,30,20,10,50};
 int n=5;

 

 int p=sizeof(array)/sizeof(array[0]);    //syntax for priinting array size(Elements).

 cout<<"Element Present withiin this Array are: "<<p<<endl; 

cout<<"Array Before Sorting is: "<<endl;
 Print(array,n,p);

  sort(array,array+n);  // this will run only if you have include stl ALgorihms Headerfle.

 cout<<"Array  After Sorting is: "<<endl;
  for(int j=0;j<n;j++){

      cout<<array[j]<<"  ";
  }

   return 0;
 }