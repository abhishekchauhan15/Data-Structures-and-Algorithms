#include<iostream> 
using namespace std;

void cycleSort(int arr[], int n){
    int i=0;
    while(i<n){
        int correctVal=arr[i]-1;
        if(arr[i]!=arr[correctVal]){
            swap(arr[i], arr[correctVal]);
        }else
        i++;

        
    }
    

}


int main(){
    int arr[]={3,5,2,1,4};
    int n=sizeof(arr)/sizeof(int);

    cycleSort(arr, n);

    for(int x : arr){
        cout<<x<<" ";
    }


return 0;
}