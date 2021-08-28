#include<iostream> 
using namespace std;

void subArray(int arr[], int n){
    for(int i=0; i<n; i++){                             //Time:O(nsquare)
        for(int j=i; j<n; j++){
            cout<<i<<j<<endl;
        }
    }

}
int main(){

int arr[]={1,2,3,4};
int n=sizeof(arr)/sizeof(int);

subArray(arr, n);
return 0;
}