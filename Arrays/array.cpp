#include<iostream> 
using namespace std;

void printArr (int arr[], int n){
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    int s= sizeof(arr)/sizeof(int);
    // cout<<"in function "<<s <<endl;
    cout<<sizeof(arr)<<endl;

}

    
int main(){


    
    int arr[]={1,2,3,4,5,6};

    int n=sizeof(arr)/sizeof(int);

    cout<<"in main "<<sizeof(arr)<<endl;
    printArr(arr,n);

    



return 0;
}