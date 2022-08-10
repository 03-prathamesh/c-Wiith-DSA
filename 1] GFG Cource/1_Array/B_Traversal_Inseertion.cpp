#include<iostream>
using namespace std;


void display( int  array[], int usedSized){

//CODE FOR TRAVERSAL
    for(int i=0;i<usedSized;i++){

        cout<<array[i]<<" ";
    }
    cout<<endl;
}

 int indexInsertion(int ar[], int size,int capacity, int index , int element){

// CODE FOR INSERTION
    if(size>=capacity){
  
  

        return -1;
    }

    for(int j=size-1;j>=index;j--){

        ar[j+1]=ar[j];
    }
     
     ar[index]=element;
     return 1;

 }
int main()
{

 int used_size=5,el_insert=6,index=2,capacity=100;
 int arr[100]={2,4,8,10,12};

  display(arr,used_size);

   indexInsertion(arr,used_size,capacity,index ,el_insert);

   
  used_size=used_size+1;   // used_size+=1; used_size++;


 //arr[6]=14;      // 14 will beinserted at the 6th index
 //used_size=used_size+1;   // used_size+=1;


   display(arr,used_size);

   return 0;    
 }