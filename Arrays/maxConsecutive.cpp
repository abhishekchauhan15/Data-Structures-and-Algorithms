#include<iostream> 
using namespace std;
// void max_consecutive(int arr[], int n){
//     int count=0;
//     int max_count=0;
//     for(int i=0; i<=n-1; i++){
//         if(arr[i]==1){
//             count++;
//             for(int j=i+1; j<n-1; j++){
//                 if(arr[j]==1){
//                     count++;
//                 }else{
//                     break;
//                 }
//             }
        
            

//         }
//         max_count=max(max_count , count);
//     }
//     cout<<max_count;

// }



void max_consecutive(int arr[], int n){
    int curr=0, result=0;
    for(int i=0; i<=n-1; i++){
        if(arr[i]==0)
        curr=0;

        else{
            curr++;
            result=max(result, curr);
        }

    }
    cout<<result;
}

int main(){
int nums[]={1,1,1,1,0,0,1,1,1,1,1};

int n=sizeof(nums)/sizeof(int);

max_consecutive(nums, n);
return 0;
}