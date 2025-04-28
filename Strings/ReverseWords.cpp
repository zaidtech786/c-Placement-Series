#include<iostream>
#include<stack>
using namespace std;

string reverseWords(string str){
    // stack<string> st;
    // for (int i = 0; i < str.length(); i++)
    // {
    //      string word = "";
    //      while(str[i]!=' ' && i < str.length()){
    //         word.push_back(str[i]);
    //         i++;
    //      }
    //      st.push(word);
    // }

    // while (!st.empty())
    // {
    //    cout << st.top() << " ";
    //    st.pop();
    // }
    stack<string> st;
    for (int i = 0; i < str.length(); i++)
    {
        string word = "";
        while (i < str.length() && str[i] !=' ')
        {
           word.push_back(str[i]);
           i++;
        }
        st.push(word);
    }

    while (!st.empty())
    {
         cout << st.top() << " ";
         st.pop();
    }
    
    
    
    
}

string reverseWord(string str) {
    int start = 0 , end = str.length() -1;
    while (start < end)
    {
        swap(str[start++] , str[end--]);
    }
    return str;
}

// Function to reverse a substring
void reverseSubstring(string& str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}



// Function to reverse each word in a string
void reverseEachWords(string &str) {
    int n = str.length();          // Step 1: Get the length of the string
    int start = 0;                 // Step 2: Initialize the start index of a word

    for (int end = 0; end <= n; end++) {
        if (end == n || str[end] == ' ') {
            reverseSubstring(str, start, end - 1);
            start = end + 1;
        }
    }

    
}



int main(){
  string str = "My Name is Zaid Siddiqui";    //Output : Siddiqui Zaid is Name My 
  reverseWords(str);
  cout << endl;

  string str2 = "Zaid Siddiqui";   //Output: diaz iuqiddiS
  reverseEachWords(str2);
  cout << str2;

}