#include<iostream>
#include<vector>
using namespace std;


bool isPanagram(string str){
  vector <bool> flag(26,false);
  for(auto ch : str){
    if(ch >= 'a' && ch<='z'){
        flag[ch - 'a'] = true;
    }
    else if(ch >= 'A' && ch<='Z'){
         flag[ch - 'A'] = true;
    }
  }

  for(auto ch : flag){
    if(ch == false){
        return false;
    }
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