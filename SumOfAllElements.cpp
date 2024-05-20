#include<iostream>
using namespace std;
int main(){
    int n,result = 0;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    int Array[n];
    for(int i = 0;i<n;i++){
        cin>>Array[i];
    }
    for(int i = 0;i<n;i++){
        cout<<Array[i]<<" "<<endl;
    }
    for(int i = 0;i<n;i++){
        result+=Array[i];
    }
    cout<<"Sum of All the elements in thte list is "<<result;

}