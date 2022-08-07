#include "Autor.h"

Autor::Autor()
{
	tipoAutor=" ... ";
}

Autor::~Autor()
{
}

void Autor::setTipoAutor(string autor){
	tipoAutor=autor;
}

string Autor::getTipoAutor(){
	return(tipoAutor);
}

