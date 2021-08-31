#include<iostream> 
using namespace std;


//Naive
// void leader(int arr[], int n){
//     for(int i=0; i<n; i++){                                 //Time:O(n^2)
//         bool flag=false;
//         for(int j=i+1; j<n; j++){
//             if(arr[j]>=arr[i]){
//                 flag=true;
//                 break;
//             }
            
             
//         }
//         if(flag!=true)
//         cout<<arr[i]<<" ";

//     }
// }



//Optimized
void leader(int arr[], int n){
   int currLead=arr[n-1];  
   cout<<currLead<<" ";                 //Tme:O(n)
   for(int i=n-2; i>=0; i--){
       if(arr[i]>currLead){
           currLead=arr[i];
            cout<<currLead<<" ";
       }
   }

}

int main(){

int arr[]={7, 10, 4, 3, 6, 5, 1};

int n=sizeof(arr)/sizeof(int);

leader(arr, n);

return 0;
}