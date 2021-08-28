#include<iostream> 
using namespace std;
int main(){
    
int arr[]={25,2345,5654,65,23,65};
int n=sizeof(arr)/sizeof(int);
bubbleSort(arr, n );

for(auto x: arr){
    cout<< x <<" ";
}


return 0;
}