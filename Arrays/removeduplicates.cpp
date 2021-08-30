//Remove the duplicates for the sorted array and return the size if it .
#include<iostream> 
using namespace std;


//Naive 
// int removeDuplicates(int arr[], int n){
//     int temp[n],size=1;                             //Time:O(n)
//     temp[0]=arr[0];                                 //Space:O(n)

//     for(int i=1;i<n; i++){
//         if(arr[i]!=temp[size-1]){
//             temp[size]=arr[i];
//             size++;
//         }

//     }
//     return size;
 

// }


//Optimized

int removeDuplicates(int arr[], int n){
    int size=1;                                 //Tme:O(n)
                                                //Space:O(1)
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[size-1]){
            arr[size]=arr[i];
            size++;
        }
    }
    return size;

}


int main(){

int arr[]={10,10,10,20,20,30};

int n=sizeof(arr)/sizeof(int);


cout<<removeDuplicates(arr, n);
return 0;
}