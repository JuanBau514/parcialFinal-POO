#include <iostream>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include "librerias.h"

using namespace std;

int e1=1, p1, a1, l1, opcion, j=0;
Profesor prof[100];
Estudiante est[100];
Lector lect[100];
Autor aut[100];

main() {
	
    do
    {
        menu();
        int op;
        cin>>op;
        switch (op)
        {
        case 1:{
        	system("cls");
            cout<<"1. Añadir Estudiante "<<endl;
            cout<<"2. Añadir Profesor "<<endl;
            cout<<"3. Añadir Lector "<<endl;
            cout<<"4. A�adir Autor "<<endl;
            cin>>opcion;
            switch (opcion)
            {
                case 1:{
                    system("cls");
                    cout<<"Añadir Estudiante"<<endl;
                    escribirEstudiante(est[e1]);
                    e1++;
                    break;
                }
                case 2:{
                    system("cls");
                    cout<<"Añadir Profesor"<<endl;
                    escribirProfesor(prof[p1]);
                    p1++;
                    break;
                }
                case 3:{
                    system("cls");
                    cout<<"Añadir Lector"<<endl;
                    escribirLectores(lect[l1]);
                    l1++;
                    break;
                }
                case 4:{
                    system("cls");
                    cout<<"Añadir Autor"<<endl;
                    escribirAutor(aut[a1]);
                    break;
                }
                default:{
                    cout<<"Opcion no valida"<<endl;
                    break;
                }
            }
            break;
        		system("cls");
        		escribirLectores(lect[j]);
             break;
        }
        case 2 :{
            system("cls");
            cout<<"1. Ver Estudiantes "<<endl;
            cout<<"2. Ver Profesores "<<endl;
            cout<<"3. ver Lectores "<<endl;
            cout<<"4. Ver Autores "<<endl;
            cin>>opcion;
            switch (opcion)
            {
                case 1:{
                    system("cls");
                    cout<<"Mostrar Estudiantes"<<endl;
                     cout<<" \t  Nombre "<< " \t  programa de estudio "  <<" \t  numero de documento " << " \t  Genero " << " \t  Fecha de nacimiento " <<endl;
                    mostrarEstudiantes(est[e1]);
                    break;
                }
                case 2:{
                    system("cls");
                    cout<<"Mostrar Profesores"<<endl;
                    cout<<" \t  Nombre "<< " \t  Area de Estudio "  <<" \t  numero de documento " << " \t  Genero " << " \t  Fecha de nacimiento " <<endl;
                    mostrarProfesores(prof[p1]);
                    break;
                }
                case 3:{
                    system("cls");
                    cout<<"Mostrar Lectores"<<endl;
                    cout<<" \t  Nombre "<<" \t  nombre del Programa "<< " \t  Area de Estudio " << "\t  nombre del programa " <<" \t  numero de documento " << " \t  Genero " << " \t  Fecha de nacimiento " <<endl;
                    mostrarLectores(lect[l1]);
                    break;
                }
                case 4:{
                    system("cls");
                    cout<<"Mostrar Autores"<<endl;
                    cout<<" \t  Nombre " << " \t  tipo de autor " <<" \t  numero de documento " << " \t  Genero " << " \t  Fecha de nacimiento " <<endl;
                    mostrarAutores(aut[a1]);
                    break;
                }
                default:{
                    cout<<"Opcion no valida"<<endl;
                    break;
                }
        }        
        default:
            break;
        }
    } 
  } while (opcion != 5);
    
 system("pause");
}

