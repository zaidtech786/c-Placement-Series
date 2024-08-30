#include<iostream>
#include<set>
using namespace std;
string removeDuplicate(string s) {
    set<char> st;
    for (int i = 0; i < s.length(); i++) {
        st.insert(s[i]);
    }
    
    string result = "";
    for (auto ch : st) {
        result += ch;
    }
    return result;
}
int main(){
string s = "test";
cout << removeDuplicate(s);

}