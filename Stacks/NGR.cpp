#include<bits/stdc++.h> 
using namespace std;

//Navie

// vector<int> nge(vector<int> arr){
//     vector<int> v ;
    
//     for(int i=0; i<arr.size(); i++){
//         int next=-1;
//         for(int j=i+1; j<arr.size(); j++){
//             if(arr[i]<arr[j]){
//                 next=arr[j];
//                 break;
//             }
            
//         }
//         v.push_back(next);

//     }
//     return v;

// }

//Optmizied
// vector<int> nge(vector<int> arr){
//     vector<int>v;
//     stack<int>s;

//     for(int i=arr.size()-1; i>=0;i--){
//         if(s.size()==0)
//         v.push_back(-1);

//         else if (arr.size()>0 && arr[i]<s.top())
//         v.push_back(s.top());

//         else if (arr.size()>0 && arr[i]>s.top()){
//             while(s.top()>0 && s.top()<=arr[i])
//             s.pop();

//             if(s.size()==0)
//             v.push_back(-1);

//             else if(s.top()>arr[i])
//             v.push_back(s.top());
//         }

//         s.push(arr[i]);
        
//     }
//         reverse(v.begin(), v.end());
//        return v;

// }

//or 
vector<int> nge(vector<int> arr){
    vector<int>v;
    stack<int>s;

    for(int i=arr.size()-1; i>=0; i--){
        while(s.size()>0 && arr[i]>s.top())
        s.pop();

        if(i<arr.size()){
            if(s.empty()==false)
            v.push_back(s.top());

            else 
            v.push_back(-1);
        }

        s.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    return v;

  

}

int main(){
vector<int>arr;

arr={4,5,2,25};

vector<int>ans;
ans=nge(arr);
 
for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
}
return 0;
}