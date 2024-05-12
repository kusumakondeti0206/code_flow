#include <bits/stdc++.h>
using namespace std;

pair<int, int> get(int a, int b){
        //complete the function here
        pair<int, int> swap;
        swap.first = b;
        swap.second = a;
        return swap;
    }
int main(){
    int a,b;
    cout<<"numbers before swapping:";
    cin>>a>>b;
    pair<int, int> swapped = get(a,b);
    cout<<"numbers after swapping:"<<swapped.first << swapped.second<<endl;
    return 0;
}