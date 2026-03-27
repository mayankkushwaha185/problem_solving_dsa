#include <iostream>
using namespace std;

int f(int i, int arr[] , int n){
    if(i>n/2) return 0;
    swap(arr[i], arr[n-i-1]);
    f(i+1, arr, n);
}

void f2(int l, int r, int arr[]){
    if(l>=r) return;
    swap(arr[l], arr[r]);
    f2(l+1, r-1, arr);
};
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    f2(0, n-1, arr);
    // f(0, arr, n);
    for(int i =0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}