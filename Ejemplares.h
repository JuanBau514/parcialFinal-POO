#ifndef EJEMPLARES_H
#define EJEMPLARES_H
#include<string>
#include<iostream>

using namespace std;

class Ejemplares
{
	private:
		int num_ejemplar;
		string estado;
	public:
		Ejemplares();
		~Ejemplares();
		
		void setEstado(string est);
		void setNejemplar(int nejem);

		string getEstado();
		int getNejemplar();
	protected:
};

#endif
