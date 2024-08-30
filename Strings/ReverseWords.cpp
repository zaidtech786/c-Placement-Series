#include<iostream>
#include<stack>
using namespace std;

string reverseWords(string str){
    stack<string> st;
    for (int i = 0; i < str.length(); i++)
    {
         string word = "";
         while(str[i]!=' ' && i < str.length()){
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

    for (int end = 0; end < n; end++) {    // Step 3: Loop through the string
        if (str[end] == ' ' || end == n - 1) { // Step 4: Check if the current character is a space or the end of the string
            if (end == n - 1) {             // Step 5: If it's the last character
                reverseSubstring(str, start, end); // Step 6: Reverse the substring from start to end
            } else {
                reverseSubstring(str, start, end - 1); // Step 7: Reverse the substring from start to end-1
            }
            start = end + 1;               // Step 8: Update start to the next character after the space
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