#include <bits/stdc++.h>
using namespace std; 


main()
{
    int T,N;
    unsigned long long int A,B;
    cin>>T;
    while(T>0)
    {   
        T--;
        cin>>N;
        int chef=0, morty=0;
        int two=2;
        int temp=N;
        while(N>0)
        {
            N--;

            cin>>A>>B;
            int sum_of_digits_A = 0 , sum_of_digits_B = 0;
            while(A>0)
            {
                sum_of_digits_A = sum_of_digits_A +  A%10;
                A = A/10;
                
            }
            while(B >0)
            {
            
                sum_of_digits_B = sum_of_digits_B + B%10;
                B = B/10;
            }

            if(sum_of_digits_A > sum_of_digits_B)
            {
                chef++;
            }
            else  if(sum_of_digits_A < sum_of_digits_B)
            { morty++; }
            else if(sum_of_digits_A == sum_of_digits_B)
            {
                chef++;
                morty++;
            }

        }
        if(chef > morty)
        {
            cout<<false<<" "<<chef-morty<<"\n";
        }
        else if(morty > chef)
        {
            cout<<true<<" "<<morty-chef<<"\n";
        }
        else if(chef == morty)
        {
            cout<<two<<" "<<temp<<"\n";
        }

    }

}
