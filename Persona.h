#ifndef PERSONA_H
#define PERSONA_H
#include "Residencia.h"
#include <stdlib.h>
#include <fstream>

using namespace std;

class Persona
{
	private :
		string nombre;
		char arch[100];//polimosfirmo
		int id;
		string genero;
		int codigo; //polimosfirmo
		int dia;
		int mes;
		int year;
		
	public:
		Persona();
		~Persona();
		void setNombre(string nom);
		void setId(int idt);
		void setGenero(string gen);
		void setCodigo(int cod);
		void setDia(int di);
		void setMes(int me);
		void setYear(int ye);
		void addResidencia(class Residencia r1); // Metodo de asociacion
		
		void escribirEstudiante (string n, string np, int i, int d,int m,int y, string g);
		void escribirLectores(string n,string np, string a, int i, int d,int m,int y, string g);
		void escribirProfesor (string n, string a, int i, int d,int m,int y, string g);
		void escribirAutor (string n, string tau, int i, int d,int m,int y, string g);

		
		string getNombre();
		int getId();
		string getGenero();
		int getCodigo();
		int getDia();
		int getMes();
		int getYear();
		
	protected:
};

#endif
