#include<cstdlib>
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void altas();
void bajas();
void buscar();
void consultas();
void modificaciones();
void eliminar ();
void salir();
void menu();
//Variables Globales
char nombre[30],grupo[10];
int semestre=0, edad=0, clave=0, auxClave=0;
bool encontrado=false;
char auxGrupo[10];
int main(){
    menu();
    return 0;
    system("PAUSE");
}
void menu(){
    int opcion=0;
    do{
        cout<<"<----Menu---->"<<endl;    
        cout<<"1. ingresar"<<endl;
        cout<<"3. Consultas"<<endl;
        cout<<"5. Modificaciones"<<endl;
        cout<<"6. Salir"<<endl;
        cout<<"7. eliminar"<<endl;
        cout<<"Que deseas hacer? ";
        cin>>opcion;
        switch(opcion){
            case 1:
                altas();
            break;
           
            case 3:
                consultas();
            break;
            
            case 5:
                modificaciones();
            break;
            case 6:
                salir();
            break;
            case 7:
            	eliminar ();
            	break;
            default:
                cout<<"¡Opcion Incorrecta!"<<endl;
        }
    }while(opcion!=6);
}//Fin funcion menu
void altas(){
    ofstream escritura;
    ifstream consulta;
    bool repetido=false;
    escritura.open("modificasiones.txt",ios::out|ios::app);
    consulta.open("modificasiones.txt",ios::in);
    if(escritura.is_open() && consulta.is_open()){
        cout<<"Ingresa el codigo del articulo: ";
        cin>>auxClave;
        consulta>>clave;
        while(!consulta.eof()){
            consulta>>nombre>>semestre>>grupo>>edad;
            if(clave==auxClave){
                cout<<"Ya Existe un Registro con esta Clave"<<endl;
                repetido=true;
                break;
            }
            consulta>>clave;
        }
        if(repetido==false){
            cout<<"ingresa el dia : ";
            cin>>grupo;
            cout<<"Ingresa el modelo: ";
            cin>>semestre;
            cout<<"Ingresa la cantidad: ";
            cin>>nombre;
   
            escritura<<auxClave<<"  "<<nombre  <<"   "<<semestre<<" "<<grupo<<"  "<<"\n"<<endl;
           
            cout<<"Registro Ageragado"<<endl;
        }

    }else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    escritura.close();
    consulta.close();
}//Fin funcion altas

void consultas(){
    ifstream lectura;
    lectura.open("alumnos.txt",ios::out|ios::in);
    if(lectura.is_open()){
        cout<<"Registros del Archivo alumnos.txt"<<endl;
        cout<<"________________________________"<<endl;
        lectura>>clave;
        while(!lectura.eof()){
            lectura>>nombre>>semestre>>grupo;
            cout<<"codigo de articulo: "<<clave<<endl;
            cout<<"cantidad "<<nombre<<endl;
            cout<<"dia: "<<grupo<<endl;
            cout<<"modelo "<<semestre<<endl;
            lectura>>clave;
            cout<<"________________________________"<<endl;
        }
    }else{
        cout<<"Error, el Archivo No se Pudo Abrir, No ha sido creado"<<endl;
    }
    lectura.close();
}//Fin funcion consultas

void bajas(){
}
void buscar(){
    ifstream lectura;//Creamos la variable de tipo lectura
    lectura.open("alumnos.txt",ios::out|ios::in);//Abrimos el archivo
    //validando la apertura del archivo
    encontrado=false;
   
    //cerrando el archivo
    lectura.close();
}
void modificaciones(){
    ofstream aux;
    ifstream lectura;
    encontrado=false;
    int auxClave=0;
    char auxNombre[30];
    aux.open("auxiliar.txt",ios::out);
    lectura.open("alumnos.txt",ios::in);
    if(aux.is_open() && lectura.is_open()){
        cout<<"Ingresa el codigo del articulo que deseas Modificar: ";
        cin>>auxClave;
        lectura>>clave;
        while(!lectura.eof()){
            lectura>>nombre>>semestre>>grupo>>edad;
            if(auxClave==clave){
                encontrado=true;
                cout<<"__________________________"<<endl;
                cout<<"codigo: "<<clave<<endl;
                cout<<"dia: "<<grupo<<endl;
                cout<<"modelo: "<<semestre<<endl;
                cout<<"cantidad: "<<nombre<<endl;
                cout<<"__________________________"<<endl;
                cout<<"Ingresa la nueva cantidad del articulo"<<grupo<<": ";
                cin>>auxNombre;
                aux<<clave<<" "<<auxNombre<<" "<<semestre<<" "<<grupo<<" "<<endl;
                cout<<"Registro Modificado"<<endl;
            }else{
                aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<endl;
            }
            lectura>>clave;
        }
    }else{
        cout<<"No se pudoAbrir el Archivo o aun no ha sido Creado"<<endl;
    }
    if(encontrado==false){
        cout<<"No se encontro ningun registro con clave "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();
    remove("alumnos.txt");
    rename("auxiliar.txt","alumnos.txt");
}
void eliminar (){
 ofstream aux;
    ifstream lectura;
    encontrado=false;
    int auxClave=0;
    char auxNombre[30];
    aux.open("auxiliar.txt",ios::out);
    lectura.open("alumnos.txt",ios::in);
    if(aux.is_open() && lectura.is_open()){
        cout<<"Ingresa el codigo del articulo que deseas eliminar: ";
        cin>>auxClave;
        lectura>>clave;
        while(!lectura.eof()){
            lectura>>nombre>>semestre>>grupo>>edad;
            if(auxClave==clave){
                encontrado=true;
                cout<<"__________________________"<<endl;
                cout<<"codigo: "<<clave<<endl;
                cout<<"dia: "<<grupo<<endl;
                cout<<"modelo: "<<semestre<<endl;
                cout<<"cantidad: "<<nombre<<endl;
                cout<<"__________________________"<<endl;
                      aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<endl;
                cout<<"eliminado ok**";
      
          
            }else{
                aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<endl;
            }
            lectura>>clave;
        }
    }else{
        cout<<"No se pudoAbrir el Archivo o aun no ha sido Creado"<<endl;
    }
    if(encontrado==false){
        cout<<"No se encontro ningun registro con codigo "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();
    remove("alumnos.txt");
    rename("auxiliar.txt","alumnos.txt");	
	
}
void salir(){
    cout<<"Programa Finalizado"<<endl;
}