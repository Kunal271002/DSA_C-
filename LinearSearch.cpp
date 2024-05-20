#include<iostream>
using namespace std;
int main(){
    int n,result = 0,x;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    cout<<"Enter the Number you want to find int he list of Array"<<endl;
    cin>>x;
    int Array[n];
    for(int i = 0;i<n;i++){
        cin>>Array[i];
    }
    for(int i = 0;i<n;i++){
        cout<<Array[i]<<" "<<endl;
    }
    for(int i = 0;i<n;i++){
        if(Array[i]==x){
            break;
            cout<<"The element is Present";
        }
    }

}