#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    return 0;
}