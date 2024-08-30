#include<iostream>
#include<unordered_map>
using namespace std;

bool isAnagram(string str1,string str2){
    unordered_map<char,int> mp;
    if(str1.length() != str2.length()){
        return false;
    }
    for(auto ch : str1){
        mp[ch]++;
    }

    for (int i = 0; i < str2.length(); i++)
    {
        if(mp.find(str2[i]) != mp.end()){
            mp[str2[i]] -= 1;
        }
        else{
            return false;
        }
    }
    
    for(auto i : mp){
        if(i.second != 0){
            return false;
        }
    }
    return  true;
}
int main(){
    // Anagrams means if a string 1 contains some letters is also present in another string.
string str1 = "abc";
string str2 = "bca";

if(isAnagram(str1,str2)){
   cout << "String is Anagram";
}
else{
  cout << "String is not Anagram";
}
}