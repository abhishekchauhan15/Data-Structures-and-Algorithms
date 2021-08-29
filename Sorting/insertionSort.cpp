#include<iostream> 
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=0; i<n ;i++){

         int curr=arr[i];
   int prev=i-1;

   while(prev>=0 && arr[prev]>curr){
       arr[prev+1]=arr[prev];
       prev=prev-1;
   }
   arr[prev+1]=curr;

    }
  
}


int main(){
    
int arr[]={25,2345,5654,65,23,65};
int n=sizeof(arr)/sizeof(int);
insertionSort(arr, n );

for(auto x: arr){
    cout<< x <<" ";
}


return 0;
}