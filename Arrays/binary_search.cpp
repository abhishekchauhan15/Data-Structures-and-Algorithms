#include<iostream> 
using namespace std;

int binarySearch(int arr[], int key){
                                                                                //Time:o(n/2) then O(n/4) then o(n/8) till 1 for kth itration 
    int n=sizeof(arr)/sizeof(int);                                               //so k= O(logn)
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;

    // if(n==0)
    // return -1;

    // else{
    while(start<=end){
        if(arr[mid]==key)
        return mid ;
        else if(arr[mid]>key)
        end=mid-1;
        else if(arr[mid]<key)
        start=mid+1;
        }
    // }
    // return -1;
}


int main(){


int arr[] = {1,2,3,4,5,6,7,8,9,10};
int key=4;
cout<<binarySearch(arr, key);




return 0;
}