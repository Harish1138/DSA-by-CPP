#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int ans=0;
    for (int i=0;i<n;i++) {
        int count=0;
        int num=arr[i];
        for (int j=0;j<n;j++) {
            if (arr[j]==num) count++;
        }
        if (count==1) ans=num;
    }
    cout<<ans<<endl;
}