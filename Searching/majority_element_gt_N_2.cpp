#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];


    // Optimal solution
    int count=0;
    int x;
    for(int i=0;i<n;i++) {
        if (count==0) {
            count=1;
            x=arr[i];
        }
        else if (x==arr[i]) count++;
        else count--;
    }
    int cnt=0;
    for (auto it:arr) {
        if (it==x) cnt++;
    }
    if (cnt>n/2) {
        cout<<"Majority Element is:"<<x<<endl;
    }
    else {
        cout<<"No Majority Element found.";
    }

}
