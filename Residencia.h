#ifndef RESIDENCIA_H
#define RESIDENCIA_H
#include <iostream>
#include <string.h>
#include "Persona.h"
using namespace std;

class Residencia
{
	private:
		string Ciudad;
		string Barrio;
		string nDireccion;
	public:
		Residencia();
		~Residencia();
		void setCiudad(string cid);
		void setBarrio(string bar);
		void setnDireccion(string dir);

		
		string getCiudad();
		string getBarrio();
		string getnDireccion();
	protected:
};

#endif
