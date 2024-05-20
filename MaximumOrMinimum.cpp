// #include<iostream>
// using namespace std;
// int main(){
//     int n,max;
//     cout<<"Enter the size of Array : ";
//     cin>>n;
//     int Array[n];
//     for(int i = 0;i<n;i++){
//         cin>>Array[i];
//     }
//     for(int i = 0;i<n;i++){
//         cout<<Array[i]<<" ";
//     }
//     cout<<"\nTo find the Maximum of All the Value"<<endl;
//     for(int i = 0;i<n;i++){
//        for(int j = 1;j<n;j++){
//         if(Array[j]>Array[i]){
//             max = Array[j];
//         }
//        }
    
//     }cout<<max;

// }


#include<iostream>
using namespace std;
int main(){
    int n,min;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int Array[n];
    for(int i = 0;i<n;i++){
        cin>>Array[i];
    }
    for(int i = 0;i<n;i++){
        cout<<Array[i]<<" ";
    }
    cout<<"\nTo find the Minimum of All the Value"<<endl;
    for(int i = 0;i<n;i++){
       for(int j = 0;j<n;j++){
        if(Array[j]>Array[i]){
            min = Array[i];
        }
       }
    
    }cout<<min;

}

