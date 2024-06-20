#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,6,7,8};
    int n;
    int count;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the First N Integer : ";
    cin>>n;
    
    count = arr[0];
    for(int i = 0;i<n-1;i++){
        if(arr[i] == count++){
            cout<<count<<" ";
            continue;
        }
        else
        {
            cout<<"The missing Number is : "<<count<<endl;
        }
    }










    return 0;
}