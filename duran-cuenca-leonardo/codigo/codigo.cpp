/*
    Para realizar este codigo me base en la HU-02 y HU-03,
    que son parte de mi primer objetivo especifico "Gestion de usuarios"

    Este codigo sencillo imita basicamente que el correo electronico introducido
    termine con la extension correcta y que la contraseña introducida sea modificable
*/

#include <iostream>
using namespace std;

int main() {
    //Variables
    string correo, password = "XXXXX", input_pass;
    int opcion;

    //Mensaje de bienvenida
    cout << "╔══════════════════════════════════════╗\n";
    cout << "║    SISTEMA DE RESERVAS - BIBLIOTECA UABC    ║\n";
    cout << "╚══════════════════════════════════════╝\n";

    //Validacion de correo electronico (@uabc.edu.mx)
    while (true){
        cout << "Ingrese su correo electronico: "; cin >> correo;
        if (correo[correo.size()-1] != 'x' and
            correo[correo.size()-2] != 'm' and
            correo[correo.size()-3] != '.' and
            correo[correo.size()-4] != 'u' and
            correo[correo.size()-5] != 'd' and
            correo[correo.size()-6] != 'e' and
            correo[correo.size()-7] != '.' and
            correo[correo.size()-8] != 'c' and
            correo[correo.size()-9] != 'b' and
            correo[correo.size()-10] != 'a' and
            correo[correo.size()-11] != 'u' and
            correo[correo.size()-12] != '@'){
            cout << "ERROR: correo electrónico invalido. Intentelo de nuevo" << endl << endl;
        } else {
            break;
        }
    }

    //Validacion de contraseña
    while (true){
        cout << "Ingrese su contraseña: "; cin >> input_pass;
        if (input_pass != password){
            cout << "ERROR: contraseña inválida. \n- Para intentar de nuevo ingrese [1]\n- Para reestablecerla presione [2]" << endl;
            cout << "Opcion : "; cin >> opcion;

            //Si el usuario elige 2 se modifica la variable 'password'
            if (opcion == 2){
                cout << "Ingrese su nueva contraseña: "; cin >> password; cout << endl;
            //Si el usuario elige 1 'otro' se intenta nuevamente
            } else {
                cout << endl;
                continue;
            }
        } else {
            break;
        }
    }

    //Mensaje de LOGIN
            cout << "\n═══════════════════════════════════════════\n";
            cout << "        BIENVENIDO/A AL SISTEMA DE RESERVAS\n";
            cout << "        Usuario: " << correo << endl;
            cout << "═══════════════════════════════════════════\n";
    return 0;
}