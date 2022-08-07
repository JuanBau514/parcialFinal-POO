#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <stdlib.h>
#include <fstream>
#include "Persona.h"

class Estudiante : virtual public Persona 
{
	private:
		string nPrograma;
	public:
		Estudiante();
		~Estudiante();
		void setnPrograma(string pro);
		string getnPrograma();
	protected:
};

#endif
