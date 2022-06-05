#include "Coleccion.h"
#include "Producto.h"
#include <iostream>

using namespace std;

int main() {

    int opcion1 = 0;

    Coleccion* productos = new Coleccion();
    productos->ingresaProducto(3000, "Papitas", 1200, 0.10, 10, 30, 0.10, 40);
    productos->ingresaProducto(2000, "Te frio Tropical", 1000, 0.15, 20, 40, 0.10, 15);
    productos->ingresaProducto(1000, "Galletas Chicky", 300, 0.1, 50, 30, 0.10, 40);
    productos->ingresaProducto(1050, "Takis", 1100, 0.1, 10, 5, 0.10, 10);


    while (opcion1 != 20) {

        cout << endl;
        cout << "------------------------MENU------------------------" << endl
            << endl;
        cout << "-01-   Ingresar un producto" << endl;
        cout << "-02-   Eliminar un producto" << endl;
        cout << "-03-   Desplegar el producto de mayor precio" << endl;
        cout << "-04-   Desplegar el producto con mayor existencia" << endl;
        cout << "-05-   Ordenar los productos por codigo" << endl;
        cout << "-06-   Desplegar todos los productos" << endl;
        cout << "-07-   Desplegar la cantidad de productos bajos de existencia"
            << endl;
        cout << "-08-   Desplegar los productos bajos de existencia" << endl;
        cout << "-09-   Desplegar el total de kilogramos de todos los productos "
            "vendidos"
            << endl;
        cout << "-10-   Desplegar el total de Kilogramos vendidos de un producto"
            << endl;
        cout << "-11-   Desplegar la lista de productos que son mas costosos que "
            "un producto dado"
            << endl;
        cout << "-12-   Desplegar la cantidad de unidades vendidas de un producto "
            "en particular"
            << endl;
        cout << "-13-   Desplegar el Costo del Inventario" << endl;
        cout << "-14-   Desplegar el Costo de las Ventas" << endl;
        cout << "-15-   Desplegar el Valor de las Ventas" << endl;
        cout << "-16-   Desplegar la ganancia total del supermercado por concepto "
            "de ventas"
            << endl;
        cout << "-17-   Desplegar el grafico de las ventas de los 5 productos mas "
            "vendidos"
            << endl;
        cout << "-18-   Desplegar el grafico de las ventas de los 5 productos "
            "menos vendidos"
            << endl;
        cout << "-19-   Desplegar el promedio de precios de venta de los productos "
            "vendidos con ganancia"
            << endl;
        cout << "-20-   SALIR" << endl;
        cin >> opcion1;
        system("cls");

        switch (opcion1) {
        case 1: {
            cout << " --------------Ingresar un producto-------------------------"
                << endl
                << endl;

            int codigo;
            string nombre;
            int precioBase;
            float porcentGanan;
            int cantVendida;
            int existencia;
            float pesoUnita;
            int existeUnita;
            int existeMinima;


           /* do {

                cout << "Ingrese el codigo del producto: ";
                cin >> codigo;
                if (codigo == 0) {
                    cout << "Codigo invalido, debe ser mayor a 0.";
                    system("pause");
                }

            } while (codigo <= 0);*/


            cout << "Ingrese el codigo del producto: ";
            cin >> codigo;
            cout << "\nIngrese el nombre del producto: ";
            cin >> nombre;
            cout << "\nIngrese el precio base: ";
            cin >> precioBase;
            cout << "\nIngrese el procentaje ganancias (valor entre 0 y 1): ";
            cin >> porcentGanan;
            cout << "\nIngrese la cantidad vendida: ";
            cin >> cantVendida;
            cout << "\nIngrese la existencia actual:";
            cin >> existencia;
            cout << "\nIngrese el peso unitario: ";
            cin >> pesoUnita;
            cout << "\nIngrese la cantidad minima: ";
            cin >> existeMinima;

            productos->ingresaProducto(codigo, nombre, precioBase, porcentGanan,
                cantVendida, existencia, pesoUnita,
                existeMinima);

            system("pause");

            system("cls");
            break;
        }

        case 2: {
            cout << " --------------Eliminar un producto-------------------------"
                << endl
                << endl;

            int codigo;
            cout << "Digite el codigo del producto a eliminar: ";

            cin >> codigo;

            if (productos->eliminarProductoPorCodigo(codigo) == true) {
                cout << "\n Producto eliminado.";
            }
            else {
                cout << "\n Ese producto no existe\n";
            }

            system("pause");

            cout << "<<ENTER>>" << endl;

            system("cls");
            break;
        }
        case 3: {
            cout << " --------------Desplegar el producto de mayor precio-------------------------" << endl << endl;
              
            Producto prod = productos->obtenerProdMayorValor();

            cout << "Estos son los detalles del producto con mayor valor de la lista: \n";

            cout << prod.toString();

            system("pause");
            cout << "<<ENTER>>" << endl;

            system("cls");
            break;
        }
        case 4: {
            cout << " --------------Desplegar el producto con mayor existencia-------------------------" << endl << endl;
               

            Producto prod = productos->obtenerProdMayorExistencia();

            cout << "Estos son los detalles del producto con mayor existencia: \n";

            cout << prod.toString();

            system("pause");
            cout << "<<ENTER>>" << endl;

            system("cls");
            break;
        }

        case 5: {
            cout << " --------------Ordenar los productos por codigo-------------------------" << endl << endl;
 
            productos->ordenarProductPorCodigo();
            cout << productos->toString() << endl;

            system("pause");
            cout << "<<ENTER>>" << endl;

            system("cls");
            break;
        }
        case 6: {
            cout << " --------------Desplegar todos los productos--------------" << endl << endl;

            cout << productos->toString();

            system("pause");

            cout << "<<ENTER>>" << endl;

            system("cls");
            break;
        }
        case 7: {
            cout << " --------------Desplegar la cantidad de productos bajos de existencia-------------------------" << endl << endl;
           
            int cant = productos->cantProductosBajosDeExistencia();

            cout << "Cantidad de productos bajos de su existencia: ";
            cout << cant;

            system("pause");
            cout << "<<ENTER>>" << endl;

            system("cls");
            break;
        }
        case 8: {
            cout << " --------------Desplegar los productos bajos de existencia-------------------------" << endl << endl;
               
            productos->imprimirProductosBajosDeExistencia();
            system("pause");
            cout << "<<ENTER>>" << endl;

            system("cls");
            break;
        }
        case 9: {
            cout << " --------------Desplegar el total de kilogramos de todos los productos vendidos-------------------------" << endl << endl;
               
            float kilos = productos->kilosTotalesVendidos();

            cout << "Cantidad de kilos que se han vendido: " << kilos << endl;

            system("pause");
            cout << "<<ENTER>>" << endl;

            system("cls");
            break;
        }
        case 10: {
            cout << " --------------Desplegar el total de Kilogramos vendidos de un producto-------------------------" << endl << endl;
              
            int cod=0;
            cout << "Ingrese el codigo: ";
            cin >> cod;

            cout << "Cantidad de kilos que se han vendido: " << productos->kilosPorProducto(cod) << endl;
           


            system("pause");
            cout << "<<ENTER>>" << endl;

            system("cls");
            break;
        }
        case 11: {
            cout << " --------------Desplegar la lista de productos que son mas costosos que un producto dado-------------------------" << endl << endl;
              
            system("pause");
            cout << "<<ENTER>>" << endl;

            system("cls");
            break;
        }
        case 12: {
            cout << " --------------Desplegar la cantidad de unidades vendidas de un producto en particular-------------------------" << endl << endl;
              
            int codigo;

            do {
                cout << "Digite el codigo del producto a consultar: ";
                cin >> codigo;

                if (codigo == 0) {
                    cout << "Codigo invalido, debe ser mayor a 0.";
                    system("pause");
                }

            } while (codigo <= 0);

            Producto prod = productos->obtenerProducto(codigo);
            cout << endl;

            cout << "La cantidad que se ha vendido de este producto es " << prod.getCantVendida();


            cout << "<<ENTER>>" << endl;
            system("pause");
            system("cls");
            break;
        }
        case 13: {
            cout << " --------------Desplegar el Costo del Inventario-------------------------" << endl << endl;
           

            cout << "Costo total del inventario actual: " << productos->costoDelInventario();

            cout << "<<ENTER>>" << endl;
            system("pause");
            system("cls");
            break;
        }
        case 14: {
            cout << " --------------Desplegar el Costo de las Ventas-------------------------" << endl << endl;
             
            cout << "Costo total del inventario actual: " << productos->costoDeVentas();

            cout << "<<ENTER>>" << endl;
            system("pause");
            system("cls");
            break;
        }
        case 15: {
            cout << " --------------Desplegar el Valor de las "
                "Ventas-------------------------"
                << endl
                << endl;

            cout << "<<ENTER>>" << endl;
            system("pause");
            system("cls");
            break;
        }
        case 16: {
            cout << " --------------Desplegar la ganancia total del supermercado por concepto de ventas-------------------------" << endl << endl;
               
            cout << "<<ENTER>>" << endl;
            system("pause");
            system("cls");
            break;
        }
        case 17: {
            cout << " --------------Desplegar el grafico de las ventas de los 5 productos mas vendidos-------------------------" << endl << endl;
             
            cout << "<<ENTER>>" << endl;
            system("pause");
            system("cls");
            break;
        }
        case 18: {
            cout << " --------------Desplegar el grafico de las ventas de los 5 productos menos vendidos-------------------------" << endl << endl;
                

            cout << "<<ENTER>>" << endl;
            system("pause");
            system("cls");
            break;
        }
        case 19: {
            cout << " --------------Desplegar el promedio de precios de venta de los productos vendidos con ganancia-------------------------" << endl << endl;
               

            cout << "<<ENTER>>" << endl;
            system("pause");
            system("cls");
            break;
        }
        case 20: {
            cout << "Gracias por usar nuestro Programa" << endl << endl;

            break;
        }
        default:
            cout << "seleccione una opcion Valida" << endl << endl;
            cout << "<<ENTER>>" << endl;
            system("pause");
            system("cls");
            break;
        }
    }

    return 0;
}
