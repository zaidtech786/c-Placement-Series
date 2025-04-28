#include<iostream>
#include<vector>
using namespace std;

string compress(vector<char> chars) {
         int count = 1;
         string ans;
         ans.push_back(chars[0]);

         for(int i = 1 ; i < chars.size() ; i++){
            if(chars[i] == chars[i - 1])   count++;
            else{
                if(count > 1 )      ans = ans + to_string(count); //a2b2dc3
                count = 1;
                ans.push_back(chars[i]);
            }
         }

         if(count > 1)    ans = ans + to_string(count);
         for(int i = 0 ; i < ans.length() ; i++){
            chars[i] = ans[i];
         }

         return ans;
}

int main(){
  vector<char> chars = {'a','a','b','b','d','c','c','c' };
  cout << compress(chars);
// a2b2
}