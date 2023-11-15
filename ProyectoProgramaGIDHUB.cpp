#include <iostream>//librerias
using namespace std;
int main(){//funcion principal
    int Variable_opcion=0;//variable parael switch
    int suma_materias=0;
    int V_cuantas_materias=0;//variable para saber cuantas materias son
    int arreglo_materias[V_cuantas_materias];//inivcialzar el arreglo para almacenar las calificaciones
    cout << "\n\nMenu de opciones";
    cout << "\n1. Promedio de calificaciones";//imprime el menu
    cout << "\n2. Calcular areas de figuras";
    cout << "\n Elige una opcion: ";
    cin >> Variable_opcion;//lee la opcion
    switch(Variable_opcion){//este es el cuerpo de los casos
            case 1://en caso que elija 1
                  cout << "Ingresa el numero de calificaciones para calcular el promedio: ";//cuantas calificaciones va apromediar
                  cin >> V_cuantas_materias;//leer dato
                  for (int i1=0; i1<V_cuantas_materias; i1++){//leer y sumar las calificaciones
                      cout << "\nIngeresa la calificacion " << i1+1 << ": ";
                      cin >> arreglo_materias[i1];
                      suma_materias+=arreglo_materias[i1];
                  }
                  float promedio_materias;//inicialiar variable para el promedio
                  promedio_materias = suma_materias / V_cuantas_materias;//sacar el promedio
                  cout << "\nEl promedio de las materias es de: " << promedio_materias;//imprimir el promedio
            break;
            case 2:
                cout<<"\nHa elegido la opcion dos, eliga una figura geometrica:\n";
                cout<<"a. Triangulo\n";
                cout<<"b. Cuadrado\n";
                cout<<"c. Circulo\n'";
                char opc2;
                cout<<"Eliga una opcion: ";
                cin>>opc2;
            float b, h, area, l, radio;
            switch(opc2){
                case 'a':
                     cout << "\nTRIANGULO\n";
                     cout<< "\nIngresa la base: ";
                     cin>>b;
                     cout<< "\nIngresa la altura: ";
                     cin>>h;
                     area = b * h / 2;
                     cout<< "\nEl area de tu triangulo es: "<<area;
                break;

                case 'b':
                     cout << "\nCUADRADO\n";
                     cout<< "\nIngresa un lado : ";
                     cin>>l;
                     area = l*l;
                     cout<< "\nEl area de tu cuadrado ES¡: "<<area; 
                break;

                case 'c':
                     cout << "\nCIRCULO\n";
                     cout<< "\nIngresa el radio: ";
                     cin>>radio;

                    area = 3.14 * (radio*radio);
                    cout << "\nEl area del circulo es: " << area;
                    break;
            }
        }
    }
