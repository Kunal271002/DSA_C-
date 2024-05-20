#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    for(int i = 0;i<n;i++){
        for(int j = 1;j<n;j++){
            if(v[i] == v[j]){
                cout<<"\nYes "<<v[i]<<" "<<v[j];
                break;
            }
        }
        break;
    }
    return 0;
}