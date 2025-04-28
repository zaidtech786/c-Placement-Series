#include<iostream>
using namespace std;

string reverse(string name,int len){
    // int left = 0 ,right = len - 1;
    // while (left <=right)
    // {
    //     // swap(name[left++],name[right--]);   // By using method
    //     int temp = name[left];
    //     name[left] = name[right];
    //     name[right] = temp;
    //     left++;
    //     right--;
    // }
    // return name;
    int s = 0 , e = len - 1 ;
    while (s < e)
    {
        char temp = name[s];
        name[s] = name[e];
        name[e] = temp;
        s++;
        e--;
    }
    return name;
    
}
int main(){
 string name = "zaid";
 int len =  name.length();
 cout << reverse(name,len);


}