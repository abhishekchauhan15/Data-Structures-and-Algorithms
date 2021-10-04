#include <bits/stdc++.h>
using namespace std;


vector<int> printBracketNumber(string exp, int n)
{
    stack<int>st;
    vector<int>v;
    int num=1;
    for(int i=0; i<n; i++){
        if(exp[i]=='('){
            st.push(num);
            v.push_back(num);
            num++;
        }else if(exp[i]==')'){
            v.push_back(st.top());
            st.pop();

        }

    }
    return v;
	
}


int main()
{
	string exp = "(a+(b*c))+(d/e)";
	int n = exp.size();
	
	vector<int> ans=printBracketNumber(exp, n);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
	
	return 0;
}
