#include <bits/stdc++.h>
using namespace std;

long long int reverse_digit(long long int n)
		{
		    // Code here
		    long long int result = 0;
		    vector<int> v;
		    while(n){
		        int rem = n%10;
		        v.push_back(rem);
		        n = n/10;
		    }
		    int j = 0;
		    int len = v.size();
		    for(int i = len-1; i >= 0; i--){
		        result += (v[j]*pow(10,i));
		        j++;
		    }
		    return result;
		}
int main(){
    long long int n;
    cout<<"give a number:";
    cin>>n;
    long long int revNum = reverse_digit(n);
    cout<<"reversed number of given number is:"<<revNum<<endl;
    return 0;
}