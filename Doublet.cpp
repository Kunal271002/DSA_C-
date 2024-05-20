#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    vector <int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter the Number to Find Doublet : ";
    cin>>x;
    for(int i = 0;i<n;i++){
        for(int j = 1;j<n;j++){
            if(v[i] + v[j] == x){
                cout<<v[i]<<" "<<v[j]<<endl;
                break;
            }
        }
    }
    return 0;
}