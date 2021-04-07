#include<iostream>
#include<math.h>
using namespace std;
main(){	


    int a,b,c,n;
    int vetor[3];
    int y=10000000;
    cin >> a >> b >> c;
   
    vetor[0]=(a*2)+(c*2);
    vetor[1]=(a*4)+(b*2);
    vetor[2]=(c*4)+(b*2);
    for (int i = 0; i < 3; i++)
    {
        n=vetor[i];
        if (n<y)
        {
            y=n;
        }
        
    }
    cout <<y<<"\n";

    return 0; 
}
