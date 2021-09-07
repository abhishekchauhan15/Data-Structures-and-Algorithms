#include<iostream> 
using namespace std;

int getSum(int n){
    if(n<10)
    return n;

    int rem=n%10;

    return getSum(n/10)+rem;


 
}


int main(){
    int n;               
    cout<<"enter n:";
    cin>>n;
   

cout<<getSum(n);
return 0;
}