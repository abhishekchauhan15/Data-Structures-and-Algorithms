#include<iostream> 
using namespace std;

void leftRotate(int arr[], int n){
    int temp=arr[0];
    for(int i=0; i<n-1; i++){
        arr[i]=arr[i+1];

    }
    arr[n-1]=temp;

}


int main(){
int arr[]={1,2,3,4,5,6,7};

int n=sizeof(arr)/sizeof(int);


leftRotate(arr, n);

for(int x: arr){
    cout<<x<<" "<<endl;
}
return 0;
}