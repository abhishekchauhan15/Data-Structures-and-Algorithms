#include<iostream> 
using namespace std;


void bubbleSort(int arr[], int n ){
    for(int times=1; times<n; times++){
        for(int j=0; j<n-times; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
}





int main(){
int arr[]={25,2345,5654,65,23,65};
int n=sizeof(arr)/sizeof(int);
bubbleSort(arr, n );

for(auto x: arr){
    cout<< x <<" ";
}
return 0;
}