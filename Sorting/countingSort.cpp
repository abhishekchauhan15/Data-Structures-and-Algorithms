#include<iostream> 
#include <vector>
using namespace std;
void countSort(int arr[], int n){
    int largest=-1;
    for(int i=0; i<n; i++){
       largest=max(largest, arr[i]);
    }

    vector<int> freq (largest+1, 0);

    for(int x:arr){
        freq[x]++;
    }

    int j=0; 
    for(int i=0; i<=largest; i++){
        while(freq[i]>0){
            arr[j]=i;
            freq[i]--;
            j++;
        }
    }


    return ;





}


int main(){
int arr[]={2,4,6,13,34,5,1};

int n=sizeof(arr)/sizeof(int);

countSort(arr, n);

for(int x : arr){
    cout<<x<<" ";
}
return 0;
}