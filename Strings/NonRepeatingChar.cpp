#include<iostream>
#include<map>
using namespace std;

char findNonRepeatingChar(string str){
map<char,int>mp;
  
  for(auto ch : str ){
    mp[ch]++;
  }

  for(auto i : mp){
    if(i.second == 1 ){
        cout << i.first << " -> " << i.second;
    }
  }
    
}
int main(){

  string str = "zzaaiid";
  findNonRepeatingChar(str);

}