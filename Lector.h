#ifndef LECTOR_H
#define LECTOR_H
#include <stdlib.h>
#include <fstream>
#include "Profesor.h"
#include "Estudiante.h"

class Lector : public virtual Estudiante,  public virtual Profesor
 {
	private:
		int estado;
	public:
		Lector();
		~Lector();
		void setEstado(int est);
		int getEstado();
};

#endif
