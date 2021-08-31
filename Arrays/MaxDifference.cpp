#include<bits/stdc++.h> 
using namespace std;

//Naive 
// int getMaxHeight(int arr[], int n){
//     int max_height=-1;                          //Time:O(n^2)
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[j]>arr[i]){
//                 max_height=max(max_height, (arr[j]-arr[i]));

//             }
//         }
//     }
//     return max_height;
// }

//Optimized
int getMaxHeight(int arr[], int n){
    int max_height=-1;                          //Time:O(n^2)
    for(int i=0; i<n-1; i++){
        
    }
    return max_height;
}


int main(){

int arr[]={7, 10, 4, 3, 6, 5, 20};

int n=sizeof(arr)/sizeof(int);

cout<<getMaxHeight(arr, n);
return 0;
}