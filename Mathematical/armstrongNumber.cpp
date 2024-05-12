#include <bits/stdc++.h>
using namespace std;

string armstrongNumber(int n){
        // code here
        int m = n;
        int sum = 0;
        while(n){
            int rem = n%10;
            sum+=(rem*rem*rem);
            n = n/10;
        }
        if(sum == m){

            return "Yes";
        }
        else{
            return "No";
        }
    }
int main(){
    int n;
    cout<<"give a number:";
    cin>>n;
    if(armstrongNumber(n)=="Yes"){
        cout<<"the given number is an armstrong number."<<endl;
    }
    else{
        cout<<"the given number is not an armstrong number."<<endl;
    }
    return 0;
}