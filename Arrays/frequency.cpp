//frequency in an sortted array 
#include<iostream> 
using namespace std;

int frequency(int arr[], int n){
    int count[n]={0};
    for(int i=0; i<n; i++){
        if(arr[i]==arr[i+1]){
            count[i]=+1;
        }

    }
    for(int x: count){
        cout<<x;<<" ";
    }

}
int main(){

int arr[]={7, 10, 4, 3, 6, 5, 20};

int n=sizeof(arr)/sizeof(int);

cout<<frequency(arr, n);
return 0;
}