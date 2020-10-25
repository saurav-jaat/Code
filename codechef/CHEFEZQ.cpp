#include <bits/stdc++.h>
using namespace std; 


main()
{
    int T;   
    cin>>T;
    while(T--)
    {   
         long long int n,k;
         cin>>n>>k;
         long long int a[n];
         
         for(long long int i=0;i<n;i++)
         {
             cin>>a[i];
         }
        
        
         long long int c=0,flag=0;
          for(int i=0;i<n;i++)
         {      
             if(a[i] + c -k < 0){
				 cout << i+1 << endl;
                 flag=1;
				 break;
			 }else{
				 c = a[i] + c -k;
			 }
         }
         
         if(flag==0)
         {
             cout<<n+c/k+1<<"\n";
         }
         


        
        
        



    }
}