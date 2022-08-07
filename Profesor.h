#ifndef PROFESOR_H
#define PROFESOR_H
#include <stdlib.h>
#include <fstream>
#include "Persona.h"

class  Profesor :virtual public Persona {
	private:
		string nArea;
	public:
		Profesor();
		~Profesor();
		void setnArea(string ar);
		string getArea();
	protected:
};

#endif
