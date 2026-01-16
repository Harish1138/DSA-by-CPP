#include<bits/stdc++.h>
using namespace std;
void brute(int arr[],int n) {
    vector<int> pos,neg;
    for (int i=0;i<n;i++) {
        if (arr[i]<0) {
            neg.push_back(arr[i]);
        }
        else if (arr[i]>0) {
            pos.push_back(arr[i]);
        }
    }
    vector<int> ans(n,0);
    int P=0,N=0;
    for (int i=0;i<n/2;i++) {
        ans[2*i]=pos[P++];
        ans[2*i+1]=neg[N++];
    }
    cout<<"By Brutal Approach: ";
    for (auto it:ans) {
        cout<<it<<" ";
    }
    cout<<endl;

}
void optimal(int arr[],int n) {
    int j=0;
    int k=1;
    vector<int> ans(n,0);
    for (int i=0;i<n;i++) {
        if (arr[i]>0) {
            ans[j]=arr[i];
            j+=2;
        }
        else if (arr[i]<0) {
            ans[k]=arr[i];
            k+=2;
        }
    }
    cout<<"By Optimal Approach: ";
    for (int i=0;i<n;i++) {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    brute(arr,n);
    optimal(arr,n);
}