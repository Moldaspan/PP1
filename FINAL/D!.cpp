#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int mx1 = 0, mx2 = 0; 
    for(int i = 0; i < n; i++){
        if(arr[i] > mx1){
            mx1 = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > mx2 and arr[i] < mx1){
            mx2 = arr[i];
        }
    }
    cout << mx1*mx2;
}