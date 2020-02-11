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
#include <stdlib.h>
#include <string>
#include <string.h>
#include <locale>
#include <cstdlib>
#include <istream>

using namespace std;

/*
 * 
 */
    struct ListaDoble{
        _TCHAR Caracter;
        struct ListaDoble *ant=NULL;
        struct ListaDoble *sig=NULL;
    };
    typedef struct ListaDoble *LstDoble;
    
    LstDoble Inicio=NULL;
    LstDoble Fin=NULL;
    
    void AgregarPrimero(_TCHAR C){
        LstDoble nuevo=new (struct ListaDoble);
        nuevo->Caracter=C;
        if(Inicio==NULL){
            Inicio=nuevo;
            Fin=nuevo;
        }else{
            nuevo->sig=Inicio;
            Inicio->ant=nuevo;
            Inicio=nuevo;
        }
    }
    
    void EliminarUltimoIngresado(){
        LstDoble Aux;
        if(Inicio->sig==NULL){
            Aux=Inicio;
            Inicio=NULL;
        }else{
            Aux=Inicio->sig;
            Aux->ant=NULL;
            Inicio->sig=NULL;
            Inicio=Aux;
        }
    }
    
    
    int MENU(){
        int Opcion=0;
        cout<<"1. AGREGAR AL INCIO \n";
        cout<<"2. ELIMINAR ULTIMO ELEMENTO \n";
        cout<<"3. BUSCAR \n";
        cout<<"4. Imprimir \n";
        cout<<"5. SALIR \n";
        cin>>Opcion;
        return Opcion;
    }
    void ImprimirLista(){
        LstDoble Aux=Inicio;
        while(true){
            cout<<"C: "<<Aux->Caracter<<endl;
            Aux=Aux->sig;
            if(Aux==NULL){break;}
        }
            
    }
    
    void Buscar(string palabra){
        cout<< palabra<<endl;
    }
    
int _tmain() {
    int Opcion=0;
    do{
        Opcion=MENU();
        switch(Opcion){
            case 1:
                _TCHAR c;
                cout << "INGRESE EL CARACTER A INGRESAR: ";
                cin>>c;
                AgregarPrimero(c);
                cout<<endl;
                break;
            case 2:
                EliminarUltimoIngresado();
                break;
            case 3:
                cout << "INGRESE LA PALABRA A BUSCAR";
                cin>>Palabra;
                Buscar(Palabra);
                break;
            case 4:
                cout << "LISTA \n";
                ImprimirLista();
                break;
            case 5:
                cout << "ADIOS...";
                break;
            default:
                cout<<"OPCION NO ENCONTRADA";
                break;
        }
    }while(Opcion!=5);
    return 0;
}
