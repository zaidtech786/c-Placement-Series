#include<iostream>
using namespace std;

string reverse(string name,int len){
    int left = 0 ,right = len - 1;
    while (left <=right)
    {
        swap(name[left++],name[right--]);
    }
    return name;
    
}
int main(){
 string name = "zaid";
 int len =  name.length();
 cout << reverse(name,len);


}