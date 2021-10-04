#include<bits/stdc++.h> 
using namespace std;
bool duplicate(string s){
    stack<char>st;

    for(int i=0; i<s.size(); i++){
        if(s[i]==')'){
            int insideElement=0;
            while(st.top()!='('){
                st.pop();
                insideElement++;

            }
            st.pop();

            if(insideElement<1)
            return true;
           
        }
        else 
            st.push(s[i]);
    }
    return false;


}
int main(){
string s="((a+b)+((c+d)))";

cout<<duplicate(s);
return 0;
}