#include<iostream> 
using namespace std;

int getLargest (int arr[], int n){
    int getLargest=INT_MIN;                               //Time:O(n)
    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1]);
        getLargest=arr[i+1];
    }
    return getLargest;
}

int main(){
int arr[]={3,4,5,2,5,6,7};

int n=sizeof(arr)/sizeof(int);

cout<<getLargest(arr, n);
return 0;
}