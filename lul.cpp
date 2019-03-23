#include<iostream>
#include<ctime>
#include"lib1.h"
using namespace std;
class Calendario{
	int ca[31];
	int hora;
	public:
	void setHora(int h){hora=h;}
	int getHora(){return hora;}
	void setDayC(int d){ca[hora]=h;}
	int getDayC(){return day;}
};

class Paciente public:Persona
{
	int curp;
	string padecimiento;
	string antecedentes;
	public:
	void setAntecedentes(string ant){antecedentes=an;}
	string getAntecedentes(){return antecedentes;}
	void setCurp(int c){curp=c;}
	int getCurp(){return curp;}
	void setPadecimiento(string p){padeciemiento=p;}
	string getPadecimiento(){return padecimiento;}
	void citaReservada(){}
};

class Medico public :Persona
{
	int horario;
	public:
	void setHorario(int h){horario=a;}
	int getHorario(){return horario;}
	void reservarCita(){}
};

class  AtencionMedicaRecibida{
	string sintomatologia;
	string diagnostico;
	string tratamiento;
	string evolucion;
};

class RecursosMultimedia{
	int tamano;
	string tipo;
	public:
	void setTamano(int t){tamano=t;}
	int getTamano(){return tamano;}
	void setTipo(striing ti){tipo=ti;}
	string getTipo(){return tipo;}
	void reproducir(){}
	void anadir(){}

};
int main(int argv,char** argc)
	{
		
	}
