#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int x;
    cout<<"Enter the Number to Find in The Array";
    cin>>x;
    int count = 0;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    for(int i = 0;i<n;i++){
        if(v[i]==x){
            count++;
        }
    }
    cout<<endl<<count;
    return 0;
}