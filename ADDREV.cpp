#include<bits/stdc++.h>

using namespace std;

int reverse(int n){
    int rev = 0;
    while(n != 0){
        int b = n % 10;
        n = n / 10;
        rev = rev * 10 + b;
    }
    return rev;
}

int main(){
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << reverse( reverse(a) + reverse(b)) << endl;
    }
}