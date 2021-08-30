#include<iostream> 
using namespace std;

bool Sorted(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1]){
            continue;
            
        }
        else
        return false;
    }

    return true;


}
int main(){
int arr[]={1,4,3,9,5,6};

int n=sizeof(arr)/sizeof(int);

cout<<Sorted(arr, n);
return 0;
}