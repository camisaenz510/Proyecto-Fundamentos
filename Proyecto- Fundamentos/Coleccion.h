#ifndef Coleccion_H
#define Coleccion_H

#include<iostream>
#include<sstream>
#include "Producto.h"

using namespace std;


class Coleccion {

private:
	int tam;
	int can;
	Producto v[200];

public:

	//-------------------constructor------------------------------------------------
	Coleccion() {
		tam = 200;
		can = 0;
	}

	//------------metodos-----------------------------------------------------------	


	//Obtiene un producto por su codigo

	Producto obtenerProducto(int codigo) {

		Producto prod = Producto();

		for (int i = 0; i < can; i++) {
			if (v[i].getCodigo() == codigo) {

				prod = v[i];

			}
		}

		return prod;
	}


	//-------------------------1------------------------------------
	void ingresaProducto(int codigo, string nombre, int precioBase, float porcentGanan, int cantVendida, int existencia, float pesoUnita, int existenMinima)
	{
		if (can < tam)
		{
			v[can].setCodigo(codigo);
			v[can].setNombre(nombre);
			v[can].setPrecioBase(precioBase);
			v[can].setporcentGanan(porcentGanan);
			v[can].setCantVendida(cantVendida);
			v[can].setExistencia(existencia);
			v[can].setPesoUnita(pesoUnita);
			v[can].setExistenMinima(existenMinima);
			can++;
		}
	}


	//-------------------------2------------------------------------
	bool eliminarProductoPorCodigo(int codigo) {
		for (int i = 0; i < can; i++) {

			if (v[i].getCodigo() == codigo) {
				v[i].~Producto();
				can--;
				return true;
			}

		}

		return false;
	}


	//-------------------------3------------------------------------
	Producto obtenerProdMayorValor() {


		int max;
		int i = 0;

		Producto prodMayorValor = v[i];
		max = v[i].getPrecioBase();

		for (i = 1; i < can; i++) {

			if (v[i].getPrecioBase() > max) {
				max = v[i].getPrecioBase();
				prodMayorValor = v[i];
			}

		}
		return prodMayorValor;
	}

	//-------------------------4------------------------------------
	Producto obtenerProdMayorExistencia() {
		Producto prodMayorExistencia;
		int i = 0;
		int max;

		prodMayorExistencia = v[i];
		max = prodMayorExistencia.getExistencia();

		for (i = 1; i < can; i++) {
			if (max < v[i].getExistencia()) {

				prodMayorExistencia = v[i];
				max = prodMayorExistencia.getExistencia();
			}
		}
		return prodMayorExistencia;
	}


	//-------------------------5------------------------------------
	void ordenarProductPorCodigo() {
		Producto aux;

		for (int x = 0; x < can; x++) {
			for (int i = 0; i < can - x - 1; i++) {
				if (v[i].getCodigo() > v[i + 1].getCodigo()) {
					aux = v[i + 1];
					v[i + 1] = v[i];
					v[i] = aux;
				}
			}
		}
		
	}

	

	//Imprimir todos los productos
	//-------------------------6------------------------------------
	string toString() {

		stringstream x;

		for (int i = 0; i < can; i++) {

			x << "----------------------------------" << endl;
			x << "Codigo: " << v[i].getCodigo() << endl;
			x << "Nombre: " << v[i].getNombre() << endl;
			x << "Porcentaje de ganancia: " << v[i].getPorcentGanan() << endl;
			x << "Precio de venta: " << v[i].getPrecioBase() << endl;

			x << "----------------------------------" << endl;
		}

		return x.str();
	}

	//-------------------------7------------------------------------
	int cantProductosBajosDeExistencia() {

		int cantProductos=0;

		for (int i = 0; i < can; i++) {

			if (v[i].getExistencia() < v[i].getExistenMinima()) {

				cantProductos++;
			}
		}
		return cantProductos;

	}


	//-------------------------8------------------------------------
	void imprimirProductosBajosDeExistencia() {
		Producto aux[200];

		for (int i = 0; i < can; i++) {
			if (v[i].getExistencia() <= v[i].getExistenMinima()) {
				cout << "-----------------------------------" << endl;
				cout <<"Codigo: " << v[i].getCodigo() << endl;
				cout <<"Nombre: " << v[i].getNombre() << endl;
				cout <<"Existencia:  " << v[i].getExistencia() << endl;
				cout <<"Existencia minima:  " << v[i].getExistenMinima() << endl;
				
			}
		}
	}

	//-------------------------9------------------------------------
	float kilosTotalesVendidos() {
		float kilosTotales=0;

		for (int i = 0; i < can; i++) {

			kilosTotales = v[i].getCantVendida() * v[i].getPesoUnita();

		}
		return kilosTotales;

	}

	//-------------------------10------------------------------------
	float kilosPorProducto(int codigo) {
		float kilos = 0;
	
		for (int i = 0; i < can; i++) {
			if (v[i].getCodigo() == codigo) {
				kilos = v[i].getCantVendida() * v[i].getPesoUnita();
			}
		}

		return kilos; 
	}
	//-------------------------11------------------------------------

	//-------------------------12------------------------------------

	//-------------------------13------------------------------------
	int costoDelInventario() {
		int costo=0;

		for (int i = 0; i < can; i++) {

			costo += v[i].getPrecioBase() * v[i].getExistencia();

		}

		return costo;

	}
	//-------------------------14------------------------------------
	int costoDeVentas() {


		int costo=0;

		for (int i = 0; i < can; i++) {

			costo += v[i].getCantVendida() * v[i].getPrecioBase();

		}
		return costo;
	}

	//-------------------------15------------------------------------
	//-------------------------16------------------------------------
	//-------------------------17------------------------------------
	//-------------------------18------------------------------------



};


#endif
