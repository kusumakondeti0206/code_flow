#include <bits/stdc++.h>
using namespace std;

int addition(int A, int B){
        // code here
        int sum = (A + B);
        return sum;
    }
int main(){
    int a,b;
    cout<<"input the data:";
    cin>>a>>b;
    int sum = addition(a,b);
    cout<<"sum of the given two numbers is:"<<sum<<endl;
    return 0;
}