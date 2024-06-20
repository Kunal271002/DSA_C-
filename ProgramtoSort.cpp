#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array size : ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}