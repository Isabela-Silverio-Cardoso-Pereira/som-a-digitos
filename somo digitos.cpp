/******************************************************************************

Realizar a soma dos dígitos de um inteiro n.


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "digite um numero";
    cin >> num;
    int soma = 0;
    
    while(num > 0){
        int  num2 = num%10;
        soma += num2;
        num /= 10;
    }
    
    cout << "a soma é" << soma; 

    return 0;
}
