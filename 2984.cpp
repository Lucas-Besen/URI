
#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;
main()
{	int i,j,ContAberto=0;
    char s[100000];
    cin>> s;
    for (i=0;s[i];i++) {
        if (s[i]=='('){
            for (j=i+1;s[j]; j++){
                if (s[j]==')')
                {
                   s[i]='f';
                   s[j]='f';
                   break;
                }   
            } 
        }   
    }
    for (i=0;s[i]; ++i) {
        if (s[i]=='('){
           ContAberto++;
        }
    }
    if (ContAberto==0){
       cout<<"Partiu RU!\n";
    }
    else{
       cout<<"Ainda temos "<< ContAberto <<" assunto(s) pendente(s)!\n";
    }
    return 0;

}   
 


