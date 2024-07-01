#include<iostream>
#include<set>
using namespace std;

string removeDuplicate(string s){
    set<int>st;
    for (int i = 0; i < s.length(); i++)
    {
        int number = s[i] - 'a';
        st.insert(number);
    }
    for(auto i : st){
        cout << i << " ";
    }
    
}
int main(){
string s = "test";
removeDuplicate(s);

}