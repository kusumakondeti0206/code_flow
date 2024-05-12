#include <bits/stdc++.h>
using namespace std;

long long nPr(int n, int r){
        // code here
        long long int res = 1;
        for(int i = n; i > (n-r); i--){
            res*=i;
        }
        return res;
    }
int main(){
    int n,r;
    cout<<"give input:";
    cin>>n>>r;
    long long int result = nPr(n,r);
    cout<<result<<endl;
    return 0;
}