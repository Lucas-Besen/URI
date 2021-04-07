#include<iostream>
#include<math.h>
using namespace std;
main(){	 
    
    int numeroDeVezes,alturaP,alturaS,larguraS,larguraP;
    cin>> numeroDeVezes;
    for (int i = 0; i < numeroDeVezes; i++)
    {
        cin >> alturaP >> larguraP >> alturaS >> larguraS;

        if (alturaP < alturaS && larguraP < larguraS )
        {
             cout << "S\n";
        }
        else if (alturaP < larguraS && larguraP < alturaS )
        {
            cout << "S\n";
        }
        else
        {
            cout << "N\n";
        }        
    }
    
    return 0; 
    }
