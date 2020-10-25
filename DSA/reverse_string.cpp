#include <bits/stdc++.h>
#include <string> 
using namespace std;
// REVERSE A STRING
int main() {
    int T;
    cin>>T;
    while(T!=0)
    {   T=T-1;
        int N,i=0;
        
        string str;
        cin>>str;
         while(str[i]!='\0')
           {  
               
               i++;
           }
           N=i;
        
       // Without using temp variable
       for(int i=0,j=N-1;i<=j;i++,j--)
       {

            str[i] ^= str[j] ^= str[i] ^= str[j];
       }
        for(int i=0;i<N;i++)
        {
            cout<<str[i];
        }
        cout<<"\n";
    }

}