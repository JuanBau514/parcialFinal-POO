#include "Estudiante.h"

Estudiante::Estudiante()
{
	nPrograma=" ... ";
}

Estudiante::~Estudiante()
{
}

void Estudiante::setnPrograma(string pro)
{
	nPrograma=pro;
}

string  Estudiante::getnPrograma(){
	return (nPrograma);
}
