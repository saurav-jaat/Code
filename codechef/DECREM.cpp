#include <bits/stdc++.h>
using namespace std; 


main()
{
    int T;   
    cin>>T;
    
    while(T--)
    {   
        long long int L,R;
        cin>>L>>R;
        
    if (R % L == R - L)
        cout << R << '\n';
    else
        cout << "-1\n";

        
        
    }
}