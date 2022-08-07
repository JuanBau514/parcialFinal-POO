#include "Profesor.h"

Profesor::Profesor()
{
	nArea=" ... ";
}

Profesor::~Profesor()
{
}

void Profesor::setnArea(string ar){
	nArea=ar;
}

string Profesor::getArea(){
	return(nArea);
}
