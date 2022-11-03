//Write a function template in C++ to find duplicate elements in an array.

#include <iostream>
using namespace std;

template <typename T>
T duplicate(T a[]){
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]==a[j]){
                return a[i];
            }
        }
    }
    return 0;
}
int main(){
    int arr[4];
    int c;
    for(int i=0;i<4;i++){
        cin>>arr[i];
        
    }
    c=duplicate<int>(arr);
    if(c==0){
        cout<<"No Duplicates";
    }
    else{
        cout<<"Duplicate number is :"<<c;
    }
    return 0;
}