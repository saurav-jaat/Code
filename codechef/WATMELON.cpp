#include <bits/stdc++.h>
using namespace std; 


main()
{
    int T,N;
    
    cin>>T;
    while(T--)
    {   cin>>N;
        int A[N],sum=0;
       for(int i=0;i<N;i++)
       {
           cin>>A[i];
           sum=sum+A[i];

         
       }
       cout<<"intial sum is :"<<sum<<"\n";
       while(sum>0)
       {    sum=0;
              int j=1;     
                    for(int i=0;i<N;i++)
                        {   A[i]=A[i]-j;
                            j++;
                            
                            sum=sum+A[i];
                            cout<<"sum inside the loop at "<<i<<" th iteration "<<sum<<"\n";
                            
                        }
       }
       cout<<"Final sum :"<<sum<<"\n";
       if(sum==0)
       {
           cout<<"YES\n";

       }
       else
       {
           cout<<"NO\n";
       }
       
       


    }
}