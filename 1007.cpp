#include<math.h>
#include<iostream>

using namespace std;

main(){
    int a,b,c,d,resposta;
    cin>>a>>b>>c>>d;
    a=(a*b);c=(c*d);
    resposta=a-c;
    cout<<"DIFERENCA = "<<resposta<<"\n";
    return 0;
}