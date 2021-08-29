#include<iostream> 
#include <algorithm>
using namespace std;
void inbuild(int arr[], int n){
    sort(arr, arr+n);

    reverse(arr, arr+n)

}


int main(){
int arr[]={2,4,6,13,34,5,1};

int n=sizeof(arr)/sizeof(int);

inbuild(arr, n);

for(int x : arr){
    cout<<x<<" ";
}
return 0;
}