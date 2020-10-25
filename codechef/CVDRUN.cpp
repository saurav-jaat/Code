#include<bits/stdc++.h>
using namespace std;
main()
{   int T;
    cin>>T;
    while(T--)
    {
        int N,K,X,Y;
        cin>>N>>K>>X>>Y;
        int a[N];
        for(int i=0;i<N;i++)
        {
            a[i]=0;
        }
       
        int temp=X;
        while((temp+K)%N != X)
        {   a[(temp+K)%N]=1;
            temp=temp+K;
            
        }
        a[(temp+K)%N]=1;
       
        
        if(a[Y]==1)
        {
            cout<<"YES\n";
        }
        else
        if(a[Y]==0)
        {
            cout<<"NO\n";
        }
        
    
    
   
    
    
    }
}
