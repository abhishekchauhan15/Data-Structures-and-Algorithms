#include<iostream> 
using namespace std;

void selectionSort(int arr[], int n){
    int min=INT_MAX;
    for(int i=0; i<=n-2; i++){
         for(int j=i+1; j<n; j++){
            if(arr[j]<arr[j+1] && arr[j]<min){
            min=arr[j];

            
        }

        swap(arr[i],min); 

    }
    }
     
}


int main(){
    
int arr[]={25,2345,5654,65,23,65};
int n=sizeof(arr)/sizeof(int);
selectionSort(arr, n );

for(auto x: arr){
    cout<< x <<" ";
}


return 0;
}