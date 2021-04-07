#include <iostream>
#include<math.h>
using namespace std;
 
int main() {
 
    int tananho, x, estrela,carneiro;
    cin>>tananho;

    int vetor [tananho];
    for (int i = 0; i < tananho; i++)
    {
        cin>>vetor[i];
    }
    x=0;
    while (x<tananho)
    {
      
        if(vetor[x]%2==0){
            vetor[x]-=1;
            x--;
        }else if (vetor[x]%2!=0)
        {
            vetor[x]-=1;
            estrela++;
            x++;
        }
        if (vetor[x]==0)
        {
            estrela++;
            break;
        }
              
        
        
    }
    for (int i = 0; i < tananho; i++)
    {
        carneiro+=vetor[i];
    }
    

    cout<<estrela<<" "<<carneiro-1<<"\n";

 
    return 0;
}