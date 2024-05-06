#include <iostream>
using namespace std;
int main()
{
    char res, color;
    cout<<"ingrese letra porfi:";
    cin>> color;
    res= color;
    switch(res)
    {
        case 'R':
        cout<<color<<"es rojo";
        break;

        case 'B':
        cout<<color<<"es azul";
        break;

        case 'Y':
        cout<<color<<"es amarillo";
        break;

        case 'W':
        cout<<color<<"es blanco";
        break;

        case 'K':
        cout<<color<<"es negro";
        break;

        case 'C':
        cout<<color<<"es cian";
        break;

        case 'G':
        cout<<color<<"es verde";
        break;

        default:
        cout<<"datos incorrectos\color";


    } return 0;

}

