#include<iostream> 
using namespace std;

void reverse(int arr[], int n){
    int start=0, end=n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}


int main(){
int arr[]={1,2,3,4,5,6,7};

int n=sizeof(arr)/sizeof(int);


reverse(arr, n);

for(int x: arr){
    cout<<x<<" "<<endl;
}
return 0;
}