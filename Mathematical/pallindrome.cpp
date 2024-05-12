#include <bits/stdc++.h>
using namespace std;

int isDigitSumPalindrome(int n) {
        // code here
        int sum = 0;
        while(n){
            int rem = n%10;
            sum += rem;
            n = n/10;
        }
        string str = to_string(sum);
        reverse(str.begin(),str.end());
        int res = stoi(str);
        if(sum == res) return 1;
        else return 0;
    }
int main(){
    int n;
    cout<<"give a number:";
    cin>>n;
    int result = isDigitSumPalindrome(n);
    cout<<result<<endl;
    return 0;
}