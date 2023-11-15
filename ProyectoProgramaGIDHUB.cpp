#include <iostream>//librerias
using namespace std;
int main(){//funcion principal
    int Variable_opcion=0;//variable parael switch
    int suma_materias=0;
    int V_cuantas_materias=0;//variable para saber cuantas materias son
    cout << "Menu de opciones";
    cout << "\n1:promedio de calificacione";//imprime el menu
    cin >> Variable_opcion;//lee la opcion
    switch(Variable_opcion){//este es el cuerpo de los casos
             case 1://en caso que elija 1
                  cout << "Ingresa el numero de calificaciones para calcular el promedio: ";//cuantas calificaciones va apromediar
                  cin >> V_cuantas_materias;//leer dato
                  int arreglo_materias[V_cuantas_materias];//inivcialzar el arreglo para almacenar las calificaciones
                  for (int i1=0; i1<V_cuantas_materias; i1++){//leer y sumar las calificaciones
                      cout << "\nIngeresa la calificacion " << i1 << ": ";
                      cin >> arreglo_materias[i1];
                      suma_materias=suma_materias+arreglo_materias[i1];
                  }
                  float promedio_materias = 0.0;//inicialiar variable para el promedio
                  promedio_materias = suma_materias / V_cuantas_materias;//sacar el promedio
                  cout << "\nEl promedio de las materias es de: " << promedio_materias;//imprimir el promedio
             break;
             
    }
    
}
