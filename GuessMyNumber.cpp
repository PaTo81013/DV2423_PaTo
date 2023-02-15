// GuessMyNumber.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
    int num;
    int compnum;
    srand(time(0));
    compnum = 1 + rand() % (100 - 1 + 1);
    system("Color 74");
    cout << "\n Hola mi buen hombre, hoy a vamos a jugar a adivina el numero\n ";
    cout << "\n Vamos a probar si funciona el generador de numeros del 1 al 100: \n" << compnum<<endl;
    cout << "\n Adivina el numero:";
    cin >> num;
    while (num!=compnum)
    {
        if (num > compnum) 
        {
            cout << num << " \n es muy alto,intenta por un numero mas bajo";
        }
        else
        {
            cout << num << " \n es muy bajo, intenta por un numero mas alto";
        }
        cin >> num;
        cout << " Ahi esta pa, lo lograste, el numero fue: " << compnum << endl;
    }
}


