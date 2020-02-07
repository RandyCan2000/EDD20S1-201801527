#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

	  struct Estudiante
	  {
		 int Carne;
		 string Nombre;
		 struct Estudiante *sig;
	  };

	  typedef struct Estudiante *ListStudent;


	  void InsertarFinal(ListStudent &lista, int Carne, string Nombre)
	  {
		 ListStudent t, q = new(struct Estudiante);

		 q -> Carne = Carne;
		 q -> Nombre = Nombre;
		 q -> sig = NULL;

		 if(lista == NULL)
		 {
			lista = q;
		 }
		 else
		 {
			t = lista;
			while(t -> sig != NULL)
			{
			   t = t -> sig;
			}

			t -> sig = q;
		 }
	  }


	  void BuscarCarne(ListaEstudiante lista, int Carne)
	  {
		 ListaEstudiante q = lista;
		 int i = 1, band = 0;

		 while(q != NULL)
		 {
			if(q -> Carne == Carne)
			{
			   cout<<endl<<" Resultado Busqueda";
			   cout<<endl<<" \n";
			   cout<<endl<<" Id: "<< q -> Id <<endl;
			   cout<<endl<<" Carne: "<< q -> Carne <<endl;
			   cout<<endl<<" Nombre: "<< q -> Nombre <<endl;
			   band = 1;
			}
			q = q -> sig;
			i++;
		 }

		 if(band == 0)
		 {
			cout<<"\n\n Carne No Encontrado..!"<< endl;
		 }
	  }

	  void Eliminar(ListaEstudiante &lista, int Carnet)
	  {
		 ListaEstudiante p, ant;
		 p = lista;

		 if(lista != NULL)
		 {
			while(p != NULL)
			{
			   if(p -> Carnet == Carnet)
			   {
				  if(p == lista)
				  {
					 lista = lista -> sig;
				  }
				  else
				  {
					 ant -> sig = p -> sig;
				  }

				  delete(p);
                  cout<<endl<<" \n";
				  cout<< "Eliminado Con Exito";
				  return;
			   }
			   else
			   {
				  cout<< "Elemento No Encontrado";
			   }
			   ant = p;
			   p = p -> sig;
			}
		 }
		 else
		 {
			cout<<endl<<" \n";
			cout<<" Lista Vacia..!";
		 }
	  }



	  void Menu()
	  {
		 cout<<"\n\t\tLista Simple \n\n";
		 cout<<" 1. Insertar Al Final                "<<endl;
		 cout<<" 2. Buscar Por Carne                 "<<endl;
		 cout<<" 3. Eliminar                         "<<endl;
		 cout<<" 4. Salir                            "<<endl;

		 cout<<"\n Ingrese El Numero De La Opcion A Elegir: ";
	  };




	int _tmain(int argc, _TCHAR* argv[])
	{
	   ListaEstudiante lista = NULL;
	   int Opcion;
	   int _Carne;
	   string _Nombre;
	   int Posicion = 0;

	   system("color 0b");

	   do
	   {
		  Menu();  cin>> Opcion;

		  switch(Opcion)
		  {
			 

			 case 1:
				cout<< "\n Carne: "; cin>> _Carne;
				cout<< "\n Nombre: "; cin>> _Nombre;
				InsertarFinal(lista, _Id, _Carne, _Nombre);
				cout << "\n";
				system("pause");
			 break;

			

			 case 2:
				cout<<"\n Carne: "; cin>> _Carne;
				BuscarCarne(lista, _Carne);
				cout << "\n";
				system("pause");
			 break;


			 case 3:
				cout<<"\n Carnet: "; cin>> _Carnet;
				Eliminar(lista, _Carnet);
				cout << "\n";
				system("pause");
			 break;

                system("pause");
			 break;
		  }

		  cout<<endl<<endl;
		  system("cls");

	   }
	   while(Opcion != 4);
       cout << "\n";
	   cout << "Aplicacion Finalizada";
	   cout << "\n";
	   system("pause");
	   return 0;
	}