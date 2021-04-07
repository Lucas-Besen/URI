#include<iostream>
#include<math.h>
using namespace std;
main(){	 
    double raio,pi=3.14159,area_do_circulo;
    cin>>raio;
    area_do_circulo=pow(raio,2)*pi;
    printf("A=%.4f\n",area_do_circulo);
    return 0; 
}
