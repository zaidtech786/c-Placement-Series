#include <iostream>
#include <math.h>
using namespace std;

int detectPerfectSq(int no) {
    int sq = sqrt(no);
    if(sq * sq == no ) {
        cout << no << " is Perfect Square of "<< sq;
    }
    else{
        cout << no << " is not have any Perfect Square ";
    }
}
int main()
{
    int no = 51;
    detectPerfectSq(no);
    return 0;
}