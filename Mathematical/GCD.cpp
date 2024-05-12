#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
        // code here
        return b == 0 ? a : gcd(b, a % b);
    }
int main(){
    int a,b;
    cout<<"give any two numbers:";
    cin>>a>>b;
    int hcf = gcd(a,b);
    cout<<"the gcd of given two numbers is:"<<hcf<<endl;
    return 0;
}