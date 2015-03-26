#include "stdafx.h"
#include <iostream>
using namespace std;
#include<stdio.h>
#include <string>
#define K 8

class Registro{
public:
	char* Leer();
	void Escribir(char B[8]);
	Registro(char *C);
private:
	char A[8];
};

Registro::Registro(char C[8]="0000000a"){
	strcpy(A, C);
};

char *Registro::Leer(){
	return A;
}

void Registro::Escribir(char B[8]){
	strcpy(A, B);
}

class Memoria{
private:
	Registro mi[K][8];
public:
	char* LeerRegistro(int i);
	char * Memoria::LeerRegistro(int i)
	{


		//return mi[i].Leer();
	}
};


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
	cout<<mem.LeerRegistro(6);
	return 0;
}