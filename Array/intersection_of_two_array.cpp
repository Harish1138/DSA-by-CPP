#include<bits/stdc++.h>
using namespace std;

/*

High risk time limit exceed
Time Complexity is NOT optimal

Your approach is:

Sorting: O(n log n + m log m)

Nested loop: O(n × m) in worst case


*/


void inte1() {


    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++) {
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    int m;
    cin>>m;
    vector<int> B(m);
    for(int i=0;i<m;i++) {
        cin>>B[i];
    }
    sort(B.begin(),B.end());
    vector<int> vis(m,0);
    vector<int> ans;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (A[i]==B[j] && vis[j]==0) {
                ans.push_back(A[i]);
                vis[j]=1;
                break;
            }
            else if (B[j]>A[i]) break;
        }
    }
    int x=ans.size();
    if (x==0) {
        cout<<"Nothing is common.";
    }
    for (auto it:ans) {
        cout<<it<<" ";
    }
}
void inte2() {

    // This approach works on only sorted array.
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++) {
        cin>>A[i];
    }
    // Sorting approach is removed.
    int m;
    cin>>m;
    vector<int> B(m);
    for(int i=0;i<m;i++) {
        cin>>B[i];
    }
    int i=0;
    int j=0;
    vector<int> ans;
    while (i<n && j<m) {
        if (A[i]<B[j]) i++;
        else if (A[i]>B[j]) j++;
        else {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    if (ans.size()==0) {
        cout<<"Nothing is common.";
    }
    for (auto it:ans) {
        cout<<it<<" ";
    }

}
int main() {
    inte2();

}