#include<iostream>
using namespace std;

 int Insertion(int arr[],int s,int eleInd,int Element,int capacity){

    if(s>=capacity){
        
      cout<<"Element will not be  addedd Becaus size of this array is Full."<<endl;
      return -1;

 }

   for (int i = s-1; i >=eleInd; i--)
   {
        
      arr[i+1]=arr[i];


   }
   
   arr[eleInd]=Element;
    return 1;


}






int main()
{

 int array[10]={1,5,3,9,4};

 int element=50; 
 int index=3;
 int cap=10;

 int size=5;

 for(int j=0;j<size;j++){


      cout<<array[j]<<" ";
  }

cout<<endl;

 Insertion(array,size,index,element,cap);


 // cout<<r<<endl;   //jar return value printkarun pahije asel tr he  function cout made taka.


  size++;

 for(int j=0;j<size;j++){


      cout<<array[j]<<" ";
  }
  

   return 0;
 }