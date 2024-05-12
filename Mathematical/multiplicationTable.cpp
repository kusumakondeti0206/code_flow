#include <bits/stdc++.h>
using namespace std;

vector<int> getTable(int N)
    {
        // Write Your Code here
        vector<int> v;
        for(int i=1; i<=10; i++){
            v.push_back(N*i);
        }
        return v;
    }
int main(){
    int n;
    cout<<"give a number:";
    cin>>n;
    vector<int> vec = getTable(n);
    for(int i = 0; i < vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}