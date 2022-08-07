#ifndef AUTOR_H
#define AUTOR_H

#include "Persona.h"

class Autor : public Persona
{
	private:
	string tipoAutor;
		
	public:
		Autor();
		~Autor();
		void setTipoAutor(string autor);
		void AdicionarLibro();
		string getTipoAutor();
	protected:
};

#endif
