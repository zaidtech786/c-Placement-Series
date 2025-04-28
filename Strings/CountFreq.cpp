#include<iostream>
#include<map>
using namespace std;

string countFreq(string str){
   map<char,int>mp;
   
   for(auto ch : str){
      mp[ch]++;
   }
   
   for(auto ch : mp){
      cout << ch.first << " -> " << ch.second <<endl;
      
   }
   
   
}
int main(){
string str = "loooool";
countFreq(str);

}