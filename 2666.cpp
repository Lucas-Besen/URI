#include<iostream>
#include<math.h>
using namespace std;
main(){	

    int NumeroCidade,PesoMaximo;

    cin >> NumeroCidade >> PesoMaximo;
    float ValorCadaCidade[NumeroCidade];
    float RotasCidade[NumeroCidade][3];
    for (int i = 0; i < NumeroCidade; i++)
    {   
        cin >> ValorCadaCidade[i];
    }
    for (int i = 0; i < NumeroCidade; i++)
    {
        for (int j = 0; i < 3 ; j++)
        {
            cin >> RotasCidade[i][j];
        }
        
    }
    
    


    return 0; 
}
