#include <iostream>
#include <string.h>
#include <locale.h>
#include "Persona.h"
#include "Residencia.h"
#include "Estudiante.h"
#include "Profesor.h"
#include "Autor.h"
#include "Lector.h"

using namespace std;

void menu() {
	setlocale(LC_CTYPE, "Spanish");

	cout<<"Bienvenido al sistema de gestion de Bibliotecas de la Universidad Distrital "<< endl;
	cout<<"  "<< endl;
	cout<<"1. Añadir personas afiliadas a la biblioteca "<< endl;
	cout<<"2. Mostar Afiliados a la Biblioteca "<< endl;
	cout<<"3. Generar un prestamo "<< endl;
	cout<<"4. Añadir Lectores a la biblioteca "<< endl;

}

void escribirEstudiante(Estudiante e){
	setlocale(LC_CTYPE, "Spanish");
	string nombre, nprom, gen;
      int id,d,m,y;
      
      cout<<"Nombre: ";
      cin>>nombre;
      e.setNombre(nombre);
      cout<<"Genero "<< endl;
      cin>>gen;
      e.setGenero(gen);
      cout<<" Digite el programa al que pertenece" << endl;
      cin>>nprom;
      e.setnPrograma(nprom);
      cout<<"Documento: " << endl;
      cin>>id;
      e.setId(id);
      cout<<"Dia de Nacimiento: "<< endl;
      cin>>d;
      e.setDia(d);
      cout<<"Mes de Nacimiento: "<< endl;
      cin>>m;
      e.setMes(m);
      cout<<"Año de Nacimiento: "<< endl;
      cin>>y;
      e.setYear(y);
      e.escribirEstudiante ( nombre, nprom, id, d, m, y, gen);
};

void escribirLectores (class Lector l) {
    setlocale(LC_CTYPE, "Spanish");
	string nombre, nprom, area, gen;
    int id,d,m,y;
    cout<<"Nombre: ";
    cin>>nombre;
    l.setNombre(nombre);

    cout<<"Genero: ";
    cin>>gen;
    l.setGenero(gen);

    cout<<" Digite el area de estudio: " ;
    cin>>area;
    l.setnArea(area);

    cout<<" Digite el programa al que pertenece: ";
    cin>>nprom;
    l.setnPrograma(nprom);

    cout<<"Documento: " ;
    cin>>id;
    l.setId(id);

    cout<<"Dia de Nacimiento: ";
    cin>>d;
    l.setDia(d);

    cout<<"Mes de Nacimiento: ";
    cin>>m;
    l.setMes(m);

    cout<<"Año de Nacimiento: ";
    cin>>y;
    l.setYear(y);

    l.escribirLectores ( nombre, nprom, area, id, d, m, y, gen);
}

void escribirProfesor (class Profesor p) {
    setlocale(LC_CTYPE, "Spanish");
      string nombre, nprom, area, gen;
    int id,d,m,y;
    cout<<"Nombre: ";
    cin>>nombre;
    p.setNombre(nombre);

    cout<<"Genero: ";
    cin>>gen;
    p.setGenero(gen);

    cout<<" Digite el area de estudio: " ;
    cin>>area;
    p.setnArea(area);

    cout<<"Documento: " ;
    cin>>id;
    p.setId(id);

    cout<<"Dia de Nacimiento: ";
    cin>>d;
    p.setDia(d);

    cout<<"Mes de Nacimiento: ";
    cin>>m;
    p.setMes(m);

    cout<<"Año de Nacimiento: ";
    cin>>y;
    p.setYear(y);

    p.escribirProfesor ( nombre, area, id, d, m, y, gen);
}

void escribirAutor (class Autor a) {
    setlocale(LC_CTYPE, "Spanish");
      string nombre, nprom, area, gen;
    int id,d,m,y;
    cout<<"Nombre: ";
    cin>>nombre;
    a.setNombre(nombre);

    cout<<"Genero: ";
    cin>>gen;
    a.setGenero(gen);

    cout<<" Digite el area de estudio: " ;
    cin>>area;
    a.setTipoAutor(area);

    cout<<"Documento: " ;
    cin>>id;
    a.setId(id);

    cout<<"Dia de Nacimiento: ";
    cin>>d;
    a.setDia(d);

    cout<<"Mes de Nacimiento: ";
    cin>>m;
    a.setMes(m);

    cout<<"Año de Nacimiento: ";
    cin>>y;
    a.setYear(y);

      a.escribirAutor ( nombre, area, id, d, m, y, gen);
}

void mostrarEstudiantes (Estudiante e) {
    setlocale(LC_CTYPE, "Spanish");
    ifstream archivo;
    string texto;
    archivo.open("datosEstudiantes.txt", ios::in);

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    while (!archivo.eof()) {
    	getline(archivo, texto);
        cout<< texto << endl;
    }
    archivo.close();
}

void mostrarLectores (class Lector l) {
	setlocale(LC_CTYPE, "Spanish");
    ifstream archivo;
    string texto;
    archivo.open("datosLectores.txt", ios::in);

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    while (!archivo.eof()) {
    	getline(archivo, texto);
        cout<< texto << endl;
    }
    archivo.close();
}

void mostrarProfesores (class Profesor p) {
	setlocale(LC_CTYPE, "Spanish");
    ifstream archivo;
    string texto;
    archivo.open("datosProfesores.txt", ios::in);

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    while (!archivo.eof()) {
    	getline(archivo, texto);
        cout<< texto << endl;
    }
    archivo.close();
}

void mostrarAutores (class Autor a) {
	setlocale(LC_CTYPE, "Spanish");
    ifstream archivo;
    string texto;
    archivo.open("datosAutores.txt", ios::in);

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    while (!archivo.eof()) {
    	getline(archivo, texto);
        cout<< texto << endl;
    }
    archivo.close();
}
