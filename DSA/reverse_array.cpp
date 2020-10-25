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
        // USING TEMP ARRAY
        char temp[N];
        for(int j=N-1,i=0;j>=0&& i<N;j--,i++)
        {
            temp[j]=a[i];
        }
        for(int i=0;i<N;i++)
        {
            cout<<temp[i];
        }
    }

}