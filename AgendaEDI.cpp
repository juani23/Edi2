#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include <iostream>
#include <string>
#include <list>
using namespace std;

class Contacto{
	private:
		string nombre, numero;
	public:


			//CONSTRUCTOR

	Contacto(string _nombre,string _numero){
		nombre = _nombre;
		numero = _numero;
	}

			//DESTRUCTOR

	~Contacto(){
	}

};
class Agenda{
	private:
		list <Contacto> contactos;
	public:
		Agenda(){
		}
		~Agenda(){
		}
		void
			listarContactos(){
		}
		void
			addContacto(Contacto contacto){
		}
};

int _tmain(int argc, _TCHAR* argv[]){
	Contacto* contacto = new Contacto("Juan","0303 456 3312");
	Agenda* agenda = new Agenda();
	agenda->addContacto(*contacto);
	agenda->listarContactos();
	delete contacto;
	delete agenda;
    system("pause");
	return 0;
};


