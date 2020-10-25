#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {   int N;
        cin>>N;
        int  a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
         for(int i=0;i<N;i++)
        {
            cout<<a[i];
        }
        sort(a,a+N);
        cout<<"min element is : "<<a[0]<<"\n";
        cout<<"max element is : "<<a[N-1]<<"\n";
    }

}