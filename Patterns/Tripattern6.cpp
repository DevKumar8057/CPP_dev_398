#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    for(int i=1; i<=n;i++){                 // if i=0    i<n

        for(int j=1; j<=i ; j++){          // then j=0   j<=i+1

            cout<<"*";

        }
        cout<<endl;
    }

    return 0;
}