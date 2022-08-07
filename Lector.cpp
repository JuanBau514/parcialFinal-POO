#include "Lector.h"
#include <stdlib.h>
#include <fstream>

Lector::Lector()
{
	estado=0;
}

Lector::~Lector()
{
}

void Lector::setEstado(int est){
	estado=est;
}

int Lector::getEstado(){
	return(estado);
};
