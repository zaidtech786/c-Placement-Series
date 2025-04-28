#include<iostream>
#include<unordered_set>
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

// Better approach
string removeDuplicate2(string s) {
    unordered_set<char> seen;  // To keep track of seen characters
    string result = "";        // To store the final result without duplicates

    for (char ch : s) {
        if (seen.find(ch) == seen.end()) {  // If the character is not in the set
            result += ch;                   // Add to result
            seen.insert(ch);                // Mark it as seen
        }
    }
    return result;
}
int main(){
string s = "test";
cout << removeDuplicate(s);

}