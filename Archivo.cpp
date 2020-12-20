#include <iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;



class Archivo {
	
	private:
	 const char * nombre;
	 ofstream *archivo;
	 string contenido;
	public:
	Archivo(){
		nombre ="Archivo.txt";
		ofstream aux(nombre);
		contenido ="Este es el contendido por defecto ";
		aux<<contenido;
		archivo = &aux;
	
	}
	Archivo(const char * _nombre ){
		nombre =_nombre;
		ofstream aux(nombre);
		contenido = "Archivo creado con Constructor con Parametros";
		aux<<contenido;
		archivo = &aux;
	} 
	ofstream * getArchivo(){
	
		return archivo;
	}
	void setNombre(const char * _nombre){
		nombre = _nombre;
	}
	const char * getNombre(){
		return nombre;
	}
	string getContenido(){
		return contenido;
	}
	void  Escribir(){
		ofstream aux(nombre);
		cout<<"Escribe para su archivo "<<endl;
		getline(cin,contenido);
		aux<<contenido;
		archivo =&aux;
		cout <<"\nSe insertado el siguiente texto :"<<endl;
		cout<<"\""<<contenido<<"\""<<endl;
		
	}

	void limpiar(){
			archivo = NULL;
			ofstream aux(nombre);
			aux<<"  ";
			cout<<"Se ha limpiado el archivo"<<endl;
			archivo = &aux;
				
	}
	

};

int main(){
	
		Archivo ar;
		//ar.Escribir();
	
	
	return 0;
}
