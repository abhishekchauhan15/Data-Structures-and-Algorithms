#include<iostream> 
using namespace std;

// void moveAllZeros(int arr[], int n){
//     for(int i=0; i<n; i++){
//         if(arr[i]==0){
//             for(int j=i+1; j<n; j++){
//                 if(arr[j]!=0){
//                     swap(arr[i], arr[j]);
//                 }
//             }
//         }
//     }
// }


void moveAllZeros(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count]);
            cout++;
    }
    
}


int main(){
int arr[]={10, 5, 0, 8, 0, 9, 0};

int n=sizeof(arr)/sizeof(int);


moveAllZeros(arr, n);
for(int x: arr){
    cout<<x<<" "<<endl;
}

return 0;
}