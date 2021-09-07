#include<iostream> 
using namespace std;

// int majorityElement(int arr[], int n){
//     int count=0;
//     for(int i=0; i<=n-1; i++){
//         for(int j=i+1; j<=n-1; j++){
//             if(arr[i]==arr[j])
//             count++;

//             if(count>n/2)
//             return i;
//         }
//     }
//     return -1;
// }


//Optimized
int majorityElement(int arr[], int n){

}

int main(){

int arr[]={3,3,3,3,4,4,11,4,5,1,7,8,5,4};
int n = sizeof(arr)/sizeof(int);

cout<<majorityElement(arr, n);
return 0;
}