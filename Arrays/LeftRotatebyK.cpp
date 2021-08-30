#include<iostream> 
using namespace std;

//Naive
void leftRotate(int arr[], int n , int k){
    int temp[k];
    for(int i=0; i<k; i++){
        temp[i]=arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i]=arr[i+k];
    }

    for(int i=0; i<n; i++){
        
    }
    

}

int main(){
int arr[]={1,2,3,4,5,6,7}, k;

int n=sizeof(arr)/sizeof(int);
cin>>k;

leftRotate(arr, n, k);

for(int x: arr){
    cout<<x<<" ";
}
return 0;
}