#include<iostream> 
using namespace std;

int maxPieces(int n, int a,int b, int c){
    if(n==0)
    return 0;

    if(n<0)
    return -1;
    

    int ans=max(maxPieces(n-a, a,b,c), maxPieces(n-b,a,b,c), maxPieces(n-c, a,b, c));
    if(res=-1)
    return -1;

    return ans+1;

    


 
}


int main(){
    int n=5,a=2,b=5,c=1;               
    
   

cout<<maxPieces(n, a,b,c);
return 0;
}