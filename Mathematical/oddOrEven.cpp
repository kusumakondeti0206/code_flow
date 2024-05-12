#include <bits/stdc++.h>
using namespace std;

string oddEven(int N){
        // code here 
        if(N%2 == 0) return "even";
        else return "odd";
    }
int main(){
    int n;
    cout<<"input the data:";
    cin>>n;
    string result = oddEven(n);
    cout<<"the given number is:"<<result<<endl;
    return 0;
}