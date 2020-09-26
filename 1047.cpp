#include<iostream>
#include<locale.h>
#include<math.h>

using namespace std;

main(){

    int HoraInicial, MinutoInicial,HoraFinal,MinutoFinal,MinutosTotal,HoraTotal;
    cin>>HoraInicial>>MinutoInicial>>HoraFinal>>MinutoFinal;
    MinutoFinal+=HoraFinal*60;
    MinutoInicial+=HoraInicial*60;
    
    if (MinutoFinal==MinutoInicial){
      
       HoraTotal=24;
       MinutosTotal=0;
    }
    else if (MinutoInicial<MinutoFinal){
       
        MinutosTotal=(MinutoFinal-MinutoInicial);
        HoraTotal=MinutosTotal/60;
        MinutosTotal=MinutosTotal-(HoraTotal*60);    
    }
    else if (MinutoInicial>MinutoFinal){
        MinutosTotal=(1440-MinutoInicial)+MinutoFinal;
        HoraTotal=MinutosTotal/60;
        MinutosTotal= MinutosTotal-(HoraTotal*60);
    }
    
    cout<<"O JOGO DUROU "<< HoraTotal <<" HORA(S) E "<< MinutosTotal <<" MINUTO(S)\n";

    return 0;
}