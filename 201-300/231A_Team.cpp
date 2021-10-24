#include <bits/stdc++.h>
using namespace std;
int main(){
    int c, p, v, t, count = 0;
    string s;
    cin >> c;
    while (c--){
        cin >> p >> v >> t;
        if ((p+v+t)>1) count++;
    }
    cout << count;  
    return 0;
}