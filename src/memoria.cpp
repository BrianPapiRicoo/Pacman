#include <iostream>
#include <TazoDorado.hpp>
#include <vector>
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
    cout << "tamanio tazo " << sizeof(TazoDorado) << endl; 
    int Tazoo[20];
     


    TazoDorado tazo;
    TazoDorado tazo2; 

    cout << "direccion tazo " << &tazo << endl; 
    cout << "direccion tazo " << &tazo2 << endl; 
    for(int i = 0 ; i<20 ; i++)
    {
        cout << "direccion " << i << &Tazoo[i] << endl ; 
    } 
/// c -------------------------------------------------------------------------------------------
    TazoDorado* direccion ;
    cout << "Direccion de direccion: " << &direccion << endl;
    direccion = (TazoDorado* ) malloc(sizeof(TazoDorado)); 
    cout << "Direccion dinamica: " << direccion+1 << endl; 
    direccion->inicializar();
    cout << "valor en direccion : " << direccion -> flotandoo() << endl; 

/// c++--------------------------------------------------------------------------------------------

TazoDorado *direccion2; 
direccion2 = new TazoDorado();
cout << "valor en direccion : " << direccion2 -> flotandoo() << endl; 




    return 0;
}
