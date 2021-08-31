#include<bits/stdc++.h> 
using namespace std;

//Naive
// void leftRotate(int arr[], int n , int k){
//     int temp[k];                                    //Time:O(n)
//     for(int i=0; i<k; i++){                         //Space:O(k)
//         temp[i]=arr[i];
//     }

//     for(int i=0; i<n; i++){
//         arr[i]=arr[i+k];
//     }

//     for(int i=0; i<k; i++){
//         arr[n-1-i]=temp[k-1-i];
        
//     }
    

// }


//Optimized
void leftRotate(int arr[], int n , int k){
  reverse(arr, 0, k-1);                                     //Time:O(n)
  reverse(arr, k, n-1);                                      //space: O(1)
  reverse(arr, 0, n-1);
    

}

void reverse(int arr[], int low, int high){
    while(low<high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

int main(){
int arr[]={1,2,3,4,5,6,7}, k;

int n=sizeof(arr)/sizeof(int);
cout<<"enter the n";
cin>>k;

leftRotate(arr, n, k);

for(int x: arr){
    cout<<x<<" ";
}
return 0;
}