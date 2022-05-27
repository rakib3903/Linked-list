#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int j=0; j<n; j++) {
        int x,y=0;
        cin>>x;
        int arr[x];
        int m=0;
        for(int i =0; i<x; i++) {
            cin>>arr[i];
            m+=arr[i];
        }
        if(m%x == 0) {
            for(int i =0; i<x; i++) {
                if(m/x == arr[i]) {
                    y++;
                    break;
                }
            }
        }else y=0;

        if(y==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

