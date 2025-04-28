#include<iostream>
#include<vector>
using namespace std;


bool isPanagram(string str) {
  vector<bool> flag(26, false);
  for(auto ch : str) {
      if(isalpha(ch)) {
          ch = tolower(ch);
          flag[ch - 'a'] = true;
      }
  }
  for(auto present : flag) {
      if(!present) return false;
  }
  return true;
}


int main(){
    // Panagrams means all the character from a to z  must be present in the given string.
string str = "thequickbrownfoxjumpsoverthelazydog";   
if(isPanagram(str)){
    cout << str << " is" << "Anagram";
}
else{
    cout << str << " is not Anagram";
}

}