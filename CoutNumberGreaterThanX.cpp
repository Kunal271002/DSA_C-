#include<iostream>
using namespace std;
int main()
{
    int n,x;
    int count = 0;
    cout<<"Enter the size of Array : ";
    cin>>n;
    cout<<"Enter the Number Greater than the Array : ";
    cin>>x;
    int Array[n];
    for(int i = 0;i<n;i++){
        cin>>Array[i];
    }
    for(int i = 0;i<n;i++){
        cout<<Array[i]<<" ";
    }
    for(int i = 0;i<n;i++){
        if(Array[i] >= x){
            count++;
        }
    }
    cout<<"\nEnter the Elements Greater than or Equal to : "<<count;
    return 0;
}