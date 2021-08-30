#include<iostream> 
#include<cstring> 
using namespace std;
int main(){

char a[100]={'a','b','c','\0'};


cout<<a<<endl;
cout<<strlen(a)<<endl;  //numbers of visible character  -3
cout<<sizeof(a);            //adds null by default  -100


char temp[100];

cin.get(temp);

for(int i=0; i<100;i++){
    cout<<temp[i];
}




 
return 0;
}