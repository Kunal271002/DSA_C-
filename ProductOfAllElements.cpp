#include<iostream>
using namespace std;
int main(){
    int n,result = 1;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int Array[n];
    for(int i = 0;i<n;i++){
        cin>>Array[i];
    }
    for(int i = 0;i<n;i++){
        cout<<Array[i]<<" ";
    }
    for(int i = 0;i<n;i++){
        result*=Array[i];
    }
    cout<<"\nSum of All the elements in thte list is "<<result;

}