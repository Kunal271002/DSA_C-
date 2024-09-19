#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> arr(10,0);
    for(int i = 0;i<10;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<10;i++){
        for(int j = i+1;i<10;i++){
            if((arr[i]+arr[j]) % 2 == 0){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}