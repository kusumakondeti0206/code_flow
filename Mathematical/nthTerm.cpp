#include <bits/stdc++.h>
using namespace std;

int findNthTerm(int N) {
        // code here
        return (N*(N+1))/2;
    }
int main(){
    int n;
    cout<<"input the data:";
    cin>>n;
    int result = findNthTerm(n);
    cout<<n<<"th term is"<<result<<endl;
    return 0;
}