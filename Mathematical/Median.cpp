#include <bits/stdc++.h>
using namespace std;

int find_median(vector<int> v)
		{
		    // Code here.
		    int median;
		    int len = v.size();
		    if(len%2 == 0){
		        median = (v[len/2]+v[(len-1)/2])/2;
		    }
		    else{
		        median = v[len/2];
		    }
		    return median;
		}
int main(){
    int n,x;
    cout<<"size of the input is:";
    cin>>n;
    vector<int> v;
    cout<<"array elements are:";
    for(int i = 0; i < n; i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int result = find_median(v);
    cout<<"the median of the given array:"<<result<<endl;
    return 0;
}