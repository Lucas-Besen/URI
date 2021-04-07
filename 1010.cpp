#include <iostream>
 
using namespace std;
 
int main() {
    int A,B;
    float C, total;
    cin>>A>>B>>C;
    total=C*B;
    cin>>A>>B>>C;
    total+=C*B; 
    printf("VALOR A PAGAR: R$ %.2f\n",total);
  
    return 0;
}