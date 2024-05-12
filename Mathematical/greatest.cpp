#include <bits/stdc++.h>
using namespace std;

int greatestOfThree(int A, int B, int C) {
        // code here
        vector<int> v;
        v.push_back(A);
        v.push_back(B);
        v.push_back(C);
        sort(v.begin(),v.end());
        int result = v[2];
        return result;
    }
int main(){
    int a,b,c;
    cout<<"input the data:";
    cin>>a>>b>>c;
    int res = greatestOfThree(a,b,c);
    cout<<"largest number is:"<<res<<endl;
    return 0;
}