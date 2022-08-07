#ifndef LIBRO_H
#define LIBRO_H
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>

using namespace std;

class Libro
{
	private:
		int isbn;
		int paginas;
		string titulo;
		string editorial;
		string edicion;
	public:
		Libro();
		~Libro();
		
		void setEditarisbn(int isb);
		void setPaginas(int pag);
		void setTitulo(string tit);
		void setEditorial(string edit);
		void setEdicion(string ed);
		
		int getEditarisbn();
		int getPaginas();
		string getTitulo();
		string getEditorial();
		string getEdicion();
	protected:
};

#endif
