#include<fstream>
#include<stdlib.h>

#include<iostream>
#include<conio.h>
#include<string.h>

#include "Persona.h"
#include "Residencia.h"


Persona::Persona()
{
	nombre=" ... ";
	id=0;
	genero=" ... ";
	codigo=0;
	dia=0;
	mes=0;
	year=0;
}

Persona::~Persona()
{
}

//metodo de escritura en el archivo
void Persona::escribirEstudiante(string n,string np, int i, int d,int m,int y, string g){
	nombre=n;
	np=np;
    id=i;
    dia=d;
    mes=m;
    year=y;
    genero=g;
    strcpy(arch,"datosEstudiantes.txt");
    ofstream o1(arch,ios::app);
    if(o1.fail())
        cout<<"El archivo no existe"<<endl;
    else
    {
    	o1<<"; \t ";
        o1<<"    "<<nombre<<"   ;   ";
		o1<<"    "<<np<<"   ;   ";
        o1<<"    "<<id<<"   ;   ";
        o1<<"    "<<g<<"   ;   ";    
        o1<<"    "<<d<<" / " << m << " / " << y << endl;
    }
    o1.close();
}

void Persona::escribirLectores(string n,string np, string a, int i, int d,int m,int y, string g){
	nombre=n;
	np=np;
	a=a;
    id=i;
    dia=d;
    mes=m;
    year=y;
    genero=g;
    strcpy(arch,"datosLectores.txt");
    ofstream o1(arch,ios::app);
    if(o1.fail())
        cout<<"El archivo no existe"<<endl;
    else
    {
    	o1<<"; \t ";
        o1<<"    "<< nombre <<"   ;   ";
		o1<<"    "<< np <<"   ;   ";
		o1<<"    "<< a <<"    ;   ";
        o1<<"    "<< id <<"   ;   ";
        o1<<"    "<< g <<"    ;   ";    
        o1<<"    "<< d <<" / " << m << " / " << y << endl;
    }
    o1.close();
}

void Persona::escribirProfesor(string n, string a, int i, int d,int m,int y, string g){
	nombre=n;
	a=a;
	id=i;
	dia=d;
	mes=m;
	year=y;
	genero=g;
	strcpy(arch,"datosProfesores.txt");
	ofstream o1(arch,ios::app);
	if(o1.fail())
		cout<<"El archivo no existe"<<endl;
	else
	{
		o1<<"; \t ";
        o1<<"    "<< nombre <<"   ;   ";
		o1<<"    "<< a <<"    ;   ";
        o1<<"    "<< id <<"   ;   ";
        o1<<"    "<< g <<"    ;   ";    
        o1<<"    "<< d <<" / " << m << " / " << y << endl;
	}
	o1.close();
}

void Persona::escribirAutor(string n, string tau, int i, int d,int m,int y, string g){
	nombre=n;
	tau=tau;
	id=i;
	dia=d;
	mes=m;
	year=y;
	genero=g;
	strcpy(arch,"datosAutores.txt");
	ofstream o1(arch,ios::app);
	if(o1.fail())
		cout<<"El archivo no existe"<<endl;
	else
	{
		o1<<"; \t ";
        o1<<"    "<< nombre <<"   ;   ";
		o1<<"    "<< tau <<"    ;   ";
        o1<<"    "<< id <<"   ;   ";
        o1<<"    "<< g <<"    ;   ";    
        o1<<"    "<< d <<" / " << m << " / " << y << endl;
	}
	o1.close();
}

void Persona::setNombre(string nom){
	nombre=nom;
}

void Persona::setId(int idt){
	id=idt;
}

void Persona::setGenero(string gen){
	genero=gen;
}

void Persona::setCodigo(int cod){
	codigo=cod;
}

void Persona::setDia(int di){
	dia=di;
}

void Persona::setMes(int me){
	mes=me;
}

void Persona::setYear(int ye){
	year=ye;
}

// Metodo de asociacion a Residencia

void Persona::addResidencia(Residencia r1){
	string caracteraux, caracter;
	string aux;
	cout << "Ciudad de residencia"<< endl;
	cin>>caracteraux;
	r1.setCiudad(caracteraux);
	cout << "Barrio de residencia"<< endl;
	cin>>caracter;
	r1.setBarrio(caracter);
	cout << "numero de direcion de la residencia"<< endl;
	cin>>aux;
	r1.setnDireccion(aux);
	
	int i=0; int contadorP=1;
	for(int n=0; n<contadorP; n++)
	{
		printf("   Nombre \t Id \t Ciudad \t\t Barrio \t Numero Direccion \n");
		
		cout<<"   "<< getNombre();
		cout<<"\t\t"<< getId();
		cout<<"\t\t"<< r1.getCiudad();
		cout<<"\t\t"<< r1.getBarrio();
		cout<<"\t\t"<< r1.getnDireccion()<<endl;	
	}	
  };

string Persona::getNombre(){
	return(nombre);
}

int Persona::getId(){
	return(id);
}

string Persona::getGenero(){
	return(genero);
}

int Persona::getCodigo() {
	return(codigo);
}

int Persona::getDia(){
	return(dia);
}

int Persona::getMes(){
	return(mes);
}

int Persona::getYear(){
	return(year);
}
