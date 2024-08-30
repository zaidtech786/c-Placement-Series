#include<iostream>
#include<map>
using namespace std;

string countFreq(string str){
   map<char,int>mp;

   for(auto ch : str){
      mp[ch]++;
   }

   for(auto i : mp){
    cout << i.first << " -> "  <<  i.second <<endl;
   
   }
   
   
}
int main(){
string str = "lool";
countFreq(str);

}