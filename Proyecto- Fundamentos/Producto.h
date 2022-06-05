#ifndef Producto_H
#define Producto_H


#include<iostream>
#include<sstream>

using namespace std;

class Producto {
private:

	int codigo;
	string nombre;
	int precioBase;
	float porcentGanan;
	int cantVendida;
	int existencia;
	float pesoUnita;
	int existenMinima;

public:

	//-----------------------constructores y destructor-----------------------------

	Producto(int codigo, string nombre, int precioBase, float porcentGanan, int cantVendida, int existencia, float pesoUnita, int existenMinima)
	{
		this->codigo = codigo;
		this->nombre = nombre;
		this->precioBase = precioBase;
		this->porcentGanan = porcentGanan;
		this->cantVendida = cantVendida;
		this->existencia = existencia;
		this->pesoUnita = pesoUnita;
		this->existenMinima = existenMinima;


	}

	//------------------------------------------------------------------------------
	Producto()
	{
		this->codigo = 0;
		this->nombre = "Indefinido";
		this->precioBase = 0;
		this->porcentGanan = 0;
		this->cantVendida = 0;
		this->existencia = 0;
		this->pesoUnita = 0;
		this->existenMinima = 0;


	}

	//------------------------------------------------------------------------------

	~Producto()
	{
	}

	//------------------metodos get-------------------------------------------------

	int getCodigo()
	{
		return this->codigo;
	}
	string getNombre()
	{
		return this->nombre;
	}
	int getPrecioBase()
	{
		return this->precioBase;
	}
	float getPorcentGanan()
	{
		return this->porcentGanan;
	}
	int getCantVendida()
	{
		return this->cantVendida;
	}
	int getExistencia()
	{
		return this->existencia;
	}
	float getPesoUnita()
	{
		return this->pesoUnita;
	}
	int getExistenMinima()
	{
		return this->existenMinima;
	}

	//---------------metodos Set----------------------------------------------------

	void setCodigo(int cod)
	{
		this->codigo = cod;
	}
	void setNombre(string nom)
	{
		this->nombre = nom;
	}
	void setPrecioBase(int PreBase)
	{
		this->precioBase = PreBase;
	}
	void setporcentGanan(float pGanan)
	{
		this->porcentGanan = pGanan;
	}
	void setCantVendida(int canVend)
	{
		this->cantVendida = canVend;
	}
	void setExistencia(int exist)
	{
		this->existencia = exist;
	}
	void setPesoUnita(float pUnit)
	{
		this->pesoUnita = pUnit;
	}
	void setExistenMinima(int existMin)
	{
		this->existenMinima = existMin;
	}

	//-------------------tostring---------------------------------------------------

	string toString()
	{
		stringstream s;
		s << "Codigo-------------------->" << this->codigo << endl;
		s << "Nombre--------------------> " << this->nombre << endl;
		s << "Precio Base---------------> " << this->precioBase << endl;
		s << "Porcentaje de ganancia----> " << this->porcentGanan << endl;
		s << "Cantidad Vendida----------> " << this->cantVendida << endl;
		s << "Existencia del Producto---> " << this->existencia << endl;
		s << "Peso unitario-------------> " << this->pesoUnita << endl;
		s << "Existencia Minima---------> " << this->existenMinima << endl;
		return s.str();
	}

};


#endif
