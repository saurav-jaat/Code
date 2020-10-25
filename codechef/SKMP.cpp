#include <bits/stdc++.h>
using namespace std; 
main()
{
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
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {   char temp;
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    
                    
                }

            }
            for(int i=0;i<N;i++)
        {
            cout<<a[i];
        }
        cout<<"\n";
        }
    }
}