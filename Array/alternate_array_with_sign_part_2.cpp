#include<bits/stdc++.h>
using namespace std;
void optimal(int arr[], int n) {
    vector<int> pos,neg,ans(n,0);
    for (int i=0;i<n;i++) {
        if (arr[i]>=0) {
            pos.push_back(arr[i]);
        }
        else {
            neg.push_back(arr[i]);
        }
    }
    int P=pos.size();
    int N=neg.size();
    if (P>N) {
        for (int i=0;i<N;i++) {
            ans[2*i]=pos[i];
            ans[2*i+1]=neg[i];
        }
        int idx=2*N;
        for (int i=N;i<P;i++) {
            ans[idx++]=pos[i];
        }
    }
    else {
        for (int i=0;i<P;i++) {
            ans[2*i]=pos[i];
            ans[2*i+1]=neg[i];
        }
        int idx=2*P;
        for (int i=P;i<N;i++) {
            ans[idx]=neg[i];
        }
    }
    cout<<"Rearrange Element of an array is : ";
    for (int i=0;i<ans.size();i++) {
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
    optimal(arr,n);

}