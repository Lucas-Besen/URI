#include<iostream>
#include<locale.h>
#include<math.h>

using namespace std;
main(){
    float pesoA=2,pesoB=3,pesoC=5,media,a,b,c;
    cin>>a>>b>>c;
    a=a*pesoA;b=b*pesoB;c=c*pesoC;
    media=a+b+c;
    media=media/(pesoA+pesoB+pesoC);
    printf("MEDIA = %.1f\n",media);
    return 0;
}