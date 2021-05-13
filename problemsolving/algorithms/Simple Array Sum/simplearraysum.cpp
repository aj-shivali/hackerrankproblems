#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,result=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        result=result+arr[i];
    }
    cout<<result;
}
