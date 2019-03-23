using namespace std;

class Persona{
	private:
        string nombre,genero;
	int edad;
	public:
	void setName(string n){nombre=n;}
	string getName(){return nombre;}
	void setGenero(string g){genero=g;}
	string getGenero(){return genero;}
	void setEdad(int e){edad=e;}
	int getEdad(){return edad;}
}
