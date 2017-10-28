#include <iostream>
#include "MailManager.h"

using namespace std;
int main() {
    int opcion;

    cout << "*********************" << endl;
    cout << "Super gestor de mails" << endl;
    cout << "*********************" << endl;

    cout << "¿Qué acción desea llevar a cabo?" << endl;
    cout << "1. Escribir un nuevo mail" << endl;
    cout << "2. Eliminar un mail" << endl;
    cout << "3. Ordenar bandeja de entrada por FECHA" << endl;
    cout << "4. Ordenar bandeja de entrada por REMITENTE" << endl;
    cout << "5. Buscar REMITENTE" << endl;
    cout << "6. Buscar una palabra suelta" << endl;
    cout << "0. SALIR" << endl;
    cin >> opcion;
    while(opcion!=0) {
        switch(opcion)
        {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 0:

                break;
            default:
                cout << "Ingrese una opcion validida por favor"<< endl;
        }

        return 0;
    }

