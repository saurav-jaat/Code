#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {   int N;
        cin>>N;
        char a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
       // Without using temp variable
       for(int i=0,j=N-1;i<=j;i++,j--)
       {

            a[i] ^= a[j] ^= a[i] ^= a[j];
       }
        for(int i=0;i<N;i++)
        {
            cout<<a[i];
        }
        cout<<"\n";
    }

}