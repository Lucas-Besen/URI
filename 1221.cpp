
#include<iostream>
#include<math.h>
using namespace std;
main()
{	 
  	int N,X,b;
    cin>>N;
    for (int a=1;a<=N;a++) {  
        cin>>X; 
        if (X==1){
            cout<<"Not Prime\n";
        } 
        b=0;
        for (int c=2; c<=sqrt(X); c++){
            if (X%c==0){
              b++;
              break;
            } 
        }
        if (b==0){
            cout<<"Prime\n";
        }
        else{
           cout<<"Not Prime\n";
        }
    } 
    return 0;
}