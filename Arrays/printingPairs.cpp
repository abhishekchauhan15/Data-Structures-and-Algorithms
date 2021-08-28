#include<iostream> 
using namespace std;

void printPairs(int arr[], int n){
    for(int i=0; i<n; i++ ){                        //nsquar subarrays 
        for(int j=i; i<n; j++){                         //Time :O(ncube)
            for(int k=i; k<=j; k++){
                cout<<arr[k]<<endl;
            }
        }       
    }

}
int main(){
int arr[] ={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(int);

printPairs(arr, n);



return 0;
}