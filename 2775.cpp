
#include<iostream>
#include<locale.h>
#include<math.h>

using namespace std;
main()
{	
    int pacote=0,x=0,soma=0;    
    while(cin>>pacote){
    int ordem[pacote];
    int tempo[pacote];
    for (int i=0;i<pacote;i++){
        cin>>ordem[i];   
    }
    for (int i=0;i<pacote;i++){
         cin>>tempo[i];
    }
    for (int l=0;l<=pacote;l++){
        for (int i=0;i<pacote-1;i++){
            if (ordem[i]>ordem[i+1]){
                x=ordem[i];
                ordem[i]=ordem[i+1];
                ordem[i+1]=x;
                soma+=tempo[i]+tempo[i+1];
                x=tempo[i];
                tempo[i]=tempo[i+1];
                tempo[i+1]=x;
            }
        }
    }
    cout<<soma<<"\n";
    soma=0;
    }
    return 0;
}   
 


