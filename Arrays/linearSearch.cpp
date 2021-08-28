#include<iostream> 
using namespace std;

int Liner_search(int arr[], int n, int key){
    for(int i=0; i<n; i++){                                     //Time:O(n)
        if(arr[i]==key)
        return i;
    }
    return -1;
}
int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    int key=40;

    cout<<Liner_search(arr, n, key);




return 0;
}