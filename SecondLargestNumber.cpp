#include<iostream>
using namespace std;
int main()
{
    int n,max,smax;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int Array[n];
    for(int i = 0;i<n;i++){
        cin>>Array[i];
    }
    for(int i = 0;i<n;i++){
        cout<<Array[i]<<" ";
    }
    for(int i = 0;i<n;i++){
        for(int j =1;i<n;i++){
            if(Array[i]>Array[j]){
                max = Array[i];
                break;
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int j = ;i<n;i++){
            if(Array[i]>Array[j] && max != Array[i]){
                smax = Array[i];
            }
        }
    }
    cout<<"\nThe First Largest Number is : "<<max;
    cout<<"\nThe Second Largest Number is : "<<smax;
    return 0;
}