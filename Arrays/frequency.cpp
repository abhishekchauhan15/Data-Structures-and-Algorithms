//frequency in an sortted array 
#include<iostream> 
using namespace std;

void frequency(int arr[], int n){
    int count[n]={0};
    for(int i=0; i<n; i++){
        count[i]=+1;
        if(arr[i]==arr[i+1]){
            count[i]=+1; 
        }

    }
    for(int x: count){
        cout<<x<<" ";
    }

}
int main(){

int arr[]={1,2,3,3,4,4,4,5,5,6};

int n=sizeof(arr)/sizeof(int);

frequency(arr, n);
return 0;
}