#include <iostream>
using namespace std;

int main()
{
    double sumaPares = 0, sumaImpares = 0;

    int primerNum = 0, segundoNum = 0;


    cout << "primer numero debe ser menos que el segundo numero: " << endl;
    cout << "entra dos numeros: " << endl;
    cin >> primerNum >> segundoNum;
    cout << endl;

    while (primerNum <= segundoNum)
    {
        if (primerNum % 2 == 0)
        {
            cout << "el numero par es: " << primerNum << endl;
            sumaPares = sumaPares + primerNum;
            primerNum = primerNum + 1;
        }
        else
        {
            cout << " el numero impar es: " << primerNum << endl;
            sumaImpares = sumaImpares + primerNum;
            primerNum = primerNum + 1;
        }
    }

    cout << "el resultado de la sumaPares: " << sumaPares << endl;
    cout << "el resultado de la sumaImpares: " << sumaImpares << endl;

    return 0;
}