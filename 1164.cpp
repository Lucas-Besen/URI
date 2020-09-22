
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, x, a, b, c, d;
    cin>>n;
    for(a=1; a<=n; a++)
    {
        cin>>x;
        c=x/2; d=0;
        for(b=1; b<=c; b++){
            if(x%b==0){
                d+=b;
            }
        }
        if(d==x){
           cout<<x<<" eh perfeito\n";
        }
        else{
            cout<<x<<" nao eh perfeito\n";
        }
    }
    return 0;
}