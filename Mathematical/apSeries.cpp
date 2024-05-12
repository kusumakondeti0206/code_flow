#include <bits/stdc++.h>
using namespace std;

int nthTermOfAP(int a1, int a2, int n) {
        // code here
        int diff = a2-a1;
        int result = a1+((n-1)*diff);
        return result;
    }
int main(){
    int a1,a2,n;
    cout<<"input the data:";
    cin>>a1>>a2>>n;
    int result = nthTermOfAP(a1,a2,n);
    cout<<n<<"th term of this series is:"<<result<<endl;
    return 0;
}