#include "Residencia.h"
#include "Persona.h"

using namespace std; 

Residencia::Residencia()
{
	Ciudad=" .. ";
	Barrio=" .. ";
	nDireccion=" .. ";
}


Residencia::~Residencia()
{
}

void Residencia::setCiudad(string cid){
	Ciudad=cid;
}
void Residencia::setBarrio(string bar){
	Barrio=bar;
}
void Residencia::setnDireccion(string dir){
	nDireccion=dir;
}



string Residencia::getCiudad(){
	return(Ciudad);
};
string Residencia::getBarrio(){
	return(Barrio);
};
string Residencia::getnDireccion(){
	return(nDireccion);
};
