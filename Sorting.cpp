#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    vector <int> v(n);
    for(int i = 0;i<v.size();i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}