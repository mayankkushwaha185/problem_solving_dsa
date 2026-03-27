#include<iostream>
using namespace std;

int main(){
    // int arr[5]= {1,3,2,1,3};

    // precompute
    // int hash[13] = {0};
    // for(int i =0; i<5; i++){
    //     hash[arr[i]] +=1;
    //     cout << "hash[" << arr[i] << "] = " << hash[arr[i]] << endl;
    // }

    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>> number;
    //     cout<<""<<endl;
    //     cout<<hash[number]<<endl;
    // }

    string s;
    cin>>s;

    // preCompute
    int hash[26]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin >>c;
        // fetch
        cout<<hash[c-'a']<<endl;
    }
}