#include <iostream>
using namespace std;

long long seriesSum(int n) {
        // code here
        if(n%2 == 0){
           return (n / 2) * 1LL * (n + 1);
        }
        else{
            return  ((n + 1) / 2) * 1LL * n; 
        }
    }

int main(){
    int n;
    cin>>n;
    long long sum = seriesSum(n);
    cout<<sum<<endl;
    return 0;
}