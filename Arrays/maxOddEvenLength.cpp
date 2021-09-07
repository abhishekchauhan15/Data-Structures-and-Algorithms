#include<iostream> 
using namespace std;

int maxLength(int arr[], int n){
    int curr_length =1;
    int max_length=0;

    for(int i=0; i<=n-2; i++){
        if(arr[i]%2==0 && arr[i+1]%2!=0 || arr[i]%2!=0 && arr[i+1]%2==0){
            curr_length+=1;

        }
         max_length=max(max_length, curr_length);
    }
    return max_length;
}

int main(){

int arr[]={10, 12, 14, 7, 8};
int n =sizeof(arr)/sizeof(int);

cout<<maxLength(arr, n );
return 0;
}