#include<iostream> 
using namespace std;

//Naive 
//  void buyAndSell(int nums[], int n ){
//     int maxx=-1;                                    //Time:O(n^2)
//     for(int i=0; i<=n-1; i++){
//         for(int j=i+1; j<=n-1; j++){
//             if(nums[j]>nums[i]){
//                maxx=max(maxx ,(nums[j]-nums[i]));

//             }
//         }
//     }
//     cout<<maxx;
// }


//Optimized
 void buyAndSell(int nums[], int n ){
 int min_price=2147483647, max_profit=0;

    for(int i=0; i<=n-1; i++){                      //Time:O(n)
        if(min_price>=nums[i]){
            min_price=nums[i];
            
        }else{
            max_profit=max(max_profit,(nums[i]-min_price));

        }
    }
    cout<<max_profit;
}


int main(){
int nums[]={1,5,3,8,12};

int n=sizeof(nums)/sizeof(int);

buyAndSell(nums, n);
return 0;
}