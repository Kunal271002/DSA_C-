#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the size of Array ";
    cin>>n;
    int Arr[n];
    cout<<"Enter the elements in the Array: "; 
    for(int i = 0;i<n;i++){
        cin>>Arr[i];
    }
    cout<<"The Elements in the array are: "<<endl;
    for(int i = 0;i<n;i++){
        cout<<Arr[i]<<" ";
    }
    for(int i = 0;i<n;i++){
        if((Arr[i] + Arr[i+1] + Arr[i+2]) == 0){
            cout<<Arr[i]<<" "<<Arr[i+1]<<" "<<Arr[i+2];
            break;
        }


    }
    return 0;
}