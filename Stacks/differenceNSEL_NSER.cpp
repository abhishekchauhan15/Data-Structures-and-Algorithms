#include<bits/stdc++.h> 
using namespace std;

vector <int> smaller(int arr[],int n){
    vector<int>v;
    stack<int>s;

    for(int i=0; i<n; i++){
        while(!s.empty() && s.top()>=arr[i])
            s.pop();
        

        if(!s.empty())
        v.push_back(s.top());
        
        else 
        v.push_back(0);
        

        v.push_back(arr[i]);
    }
    return v;

  
}

int maxDiff(int arr[], int n){
    vector<int>ls,rs;
    ls=smaller(arr, n);

    reverse(arr, arr+n);

    rs=smaller(arr, n);

    int ans=-1;
    for(int i=0; i<n; i++){
        ans=max(ans, abs(ls[i]-rs[i]));
    }
    return ans;  
}

int main(){

int arr[]={5, 1, 9, 2, 5, 1, 7};

int n=sizeof(arr)/sizeof(int);
    
cout<<maxDiff(arr, n);
return 0;
}