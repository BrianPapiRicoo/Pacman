#include <iostream>
using namespace std; 
int main()
{
    int entero = 3; 
    bool boleno = true; 
    char letra = 'a';
    float decimal = 1.2; 
    cout << "tamanio entero " << sizeof(entero) << endl; 
    cout << "tamanio boleno " << sizeof(boleno) << endl; 
    cout << "tamanio letra " << sizeof(letra) << endl; 
    cout << "tamanio decimal " << sizeof(decimal) << endl; 


    return 0;
}
