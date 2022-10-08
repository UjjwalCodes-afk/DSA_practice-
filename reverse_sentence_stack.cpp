#include<bits/stdc++.h>
using namespace std;

void Reverse(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string words = "";
        while(s[i]!=' ' && i<s.length()){
            words = words + s[i];
            i++;
        }
        st.push(words);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();

    }

}
int main(){
    string d;
    getline(cin, d);

    Reverse(d);
    return 0;
}