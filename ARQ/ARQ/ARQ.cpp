#include "stdafx.h"
#include <iostream>
using namespace std;
#include<stdio.h>
#include <string>
#define K 1024

class Registro{
public:
	string Leer();
	void Escribir(string B);
	Registro(string C);
private:
	string A;
};

Registro::Registro(string C = "0000000a"){
	A = C;
};

string Registro::Leer(){
	return A;
}

void Registro::Escribir(string B){
	A = B;
}

class Memoria{
private:
	Registro mi[K];
public:
	string LeerRegistro(int i);
	
};
string Memoria::LeerRegistro(int i)
{
	string ax = mi[i].Leer(), aux;
	aux = ax.substr(0,8);
	return aux;
}


class BUS {
};

class ALU{
	Registro reg_Operadores;
	Registro reg_Operando;
	Registro reg_Salida;
	Registro reg_opCode;
	//metodos padrotres aun no listos
};

class Set_instrucciones : public ALU{
	//Array_inst[100];

};

int main(){
	Registro AC = Registro(" ");
	Registro IR = Registro(" ");
	Registro MBR = Registro(" ");
	AC.Escribir("00000000");
	Memoria mem;
	cout << mem.LeerRegistro(200);
	return 0;
}