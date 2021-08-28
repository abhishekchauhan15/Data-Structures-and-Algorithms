#include<bits/stdc++.h> 
using namespace std;

int reverse(int arr[]){
                                                                                //Time:o(n/2) or O(n)
    int start=0, end=sizeof(arr)/sizeof(int)-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr;
}
int main(){

int arr[10]= {1,2,3,4,5,6,7,8,9,10};


cout<<reverse(arr);


return 0;
}