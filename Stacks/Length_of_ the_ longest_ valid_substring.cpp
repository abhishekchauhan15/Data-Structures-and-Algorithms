#include<bits/stdc++.h> 
using namespace std;

int length(string s){
    stack<char>st;
    int count=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(')
        st.push(s[i]);

        else if(st.top()=='('){
        count+=2;
        st.pop()

        }



    }
    return count;
}


int main(){
string s="()(()))))";

cout<<length(s);






return 0;
}