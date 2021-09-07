#include<iostream> 
using namespace std;

int recursion(int n ){
    if(n==0)
    return 0;


    return recursion(n-1)+n;
   
    

}


int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int sum=0;

cout<<recursion(n);
return 0;
}