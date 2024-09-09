#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main(){

int opcion;

cout << "      " << "SELECCIONE UNA OPCION" << endl;

cout <<"\n"<< "1. " << "Copiar cadena" <<endl;
cout << "2. " << "Comparar cadenas" <<endl;
cout << "3. " << "Concatenar cadenas" <<endl;
cout << "4. " << "Inverir cadena" <<endl;
cout << "5. " << "Convertir a minusculas" <<endl;
cout << "6. " << "Convertir a mayusculas" <<endl;
cout << "7. " << "Convertir cadena a entero" <<endl;
cout << "8. " << "Convertir cadena a flotante" <<endl;
cout <<"\n"<< "9. " << "SALIR" <<endl;
cout <<"\n" ;

cout << "Introduzca su opcion: "; cin >> opcion ;


switch(opcion){


char Cad[1000];
char Cad2[1000];


strcpy(Cad2,Cad);
cout << Cad2 << endl;

case 1:
cout << "   "<< "Ingrese los caracteres del array a convertir.";
cout <<"\n";
cout <<"\n"<< " --> ";

cin >> Cad;//usaria cin.getline(); pero por alguna razon no me permite

cout << "\n"<<"  ";
strcpy(Cad2,Cad);
cout << "La cadena fue copiada con exito: "<<Cad2 << endl;

    break;
case 2:

char array1[1000];
char array2[1000];

cout << "\n";
cout << "Escriba los caracteres del siguiente array: ";
cin >> array1;
cout << "Escriba los caracteres del siguiente array: ";
cin >> array2;


if(strcmp(array1,array2)== 0){
    cout << "Estas cadenas de texto son iguales" << endl;



}if(strcmp(array1,array2) != 0){
    if(strcmp(array1,array2) > 0){
        cout <<"\n"<< "   "<<  "Estos arrays son diferentes y el mayor alfabeticamente es: " << array1 << endl;


    }
}if(strcmp(array1,array2) != 0 ){
    if(strcmp(array1,array2) < 0){
        cout <<"\n"<< "   "<< "Estos arrays son diferentes y el mayor alfabeticamente es: " << array2 << endl;
    }

    break;



case 3:
char cad1[1000];
char cad2[1000];
char cad3[1000];

cout <<"\n" << "Ingrese la primera cadena a concatenar: "; cin >> cad1;
cout << "Ingrese la segunda cadena a concatenar: "; cin >> cad3;


strcpy(cad2,cad1);
strcat(cad2,cad3);

cout << "\n"<< "   " << cad2 << endl;

case 4:
    char cadin[1000];
    cout <<"\n" << "Esta funcion invierte las cadenas"<< endl;
     cout <<"\n";
    cout << "Escriba la cadena a invertir: "; cin>>cadin;

    strrev(cadin);
     cout <<"\n";
    cout << cadin << endl;

    break;
case 5:
    char cadmin[1000];
    cout <<"\n" << "Esta funcion convierte a minusculas las cadenas "<< endl;
     cout <<"\n";
    cout << "Escriba la cadena: "; cin>>cadmin;

    strlwr(cadmin);
     cout <<"\n";
    cout << cadmin << endl;

    break;
case 6:


     char cadmax[1000];
    cout <<"\n" << "Esta funcion convierte a mayusculas las cadenas "<< endl;
     cout <<"\n";
    cout << "Escriba la cadena: "; cin>>cadmax;

    strupr(cadmax);
     cout <<"\n";
    cout << cadmax << endl;


    break;
case 7:
    char arr[1000];
    int numero;

    cout <<"\n" << "Esta funcion convierte los caracteres en numeros enteros"<< endl;
     cout <<"\n";
    cout << "Escriba la cadena: "; cin>>arr;

    numero = atoi(arr);
     cout <<"\n";
    cout << numero << endl;


case 8:
    char arr1[1000];
    int numerof;

    cout <<"\n" << "Esta funcion convierte los caracteres en numeros flotantes"<< endl;
     cout <<"\n";
    cout << "Escriba la cadena: "; cin.getline(arr1,100,'\n');

    numerof = atof(arr1);
     cout <<"\n";
    cout << numerof << endl;


    break;
}


getch();
return 0;
}
}
