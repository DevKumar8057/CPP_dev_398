#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int cnum=1;
    for(int i=0; i<n;i++){

        for(int j=0; j<n ; j++){

            cout<<cnum<<" ";
            cnum=cnum+1;

        }
        cout<<endl;
    }
 cout<<"cnum value after pattern : "<<cnum;

    return 0;
}