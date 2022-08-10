#include<iostream>
using namespace std;


void display( int  array[], int usedSized){

//CODE FOR TRAVERSAL
    for(int i=0;i<usedSized;i++){

        cout<<array[i]<<" ";
    }
    cout<<endl;
}

 void  indexDeletion(int ar[], int size, int index ){

//size of array is 5 , means 0 to 4 index .
// CODE FOR Deletion
   
    for(int j=index;j<size-1;j++){

        ar[j]=ar[j+1];
    }
     
    //  ar[2]=ar[3];
    //  ar[3]=ar[4];
     
     
 }
int main()
{

 int used_size=5,el_insert=6,index=2,capacity=100;
 int arr[100]={2,4,8,10,12}; 

  display(arr,used_size);

   indexDeletion(arr,used_size,index );

   
  used_size=used_size-1;   //in this way we  can delete element from last also 

 


   display(arr,used_size);

   return 0;    
 }