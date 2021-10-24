#include <bits/stdc++.h>
using namespace std;
int n, k, c = 0, arr[10000];
int main(){
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int j = 1; j <= n; j++)
        if ((arr[j] >= arr[k]) && (arr[j] > 0)) c++;
    cout << c;
}