//find the sum of all subarrays and print the largest sum 
#include<iostream> 
using namespace std;


//Brute Force

// void sum(int arr[], int n){
//     int largest_sum=0;                                                          //Time:O(n^3)
    
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             int curr_sum=0; //doubt 
//             for(int k=i; k<=j; k++){
//                 curr_sum+=arr[k];

//             }
//             if(largest_sum<curr_sum){
//                 largest_sum=curr_sum;
//             }
//         }
//     }
//     cout<<largest_sum;
// }


//Prefix Sum 

//Kadane's Algorithm 

void sum(int arr[],int n ){
    int currSum=0;
    int maxSum=0;
    for(int i=0; i<n; i++){
        currSum+=arr[i];                                        //Time:O(n)
        if(currSum<0)
        currSum=0;
         
         maxSum=max(currSum, maxSum);


    }
    cout<<maxSum;

}

int main(){

int arr[]={-2,3,4,-1,5,-12,6,1,3};
int n=sizeof(arr)/sizeof(int);

sum(arr, n);
return 0;
}