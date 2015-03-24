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

Registro::Registro(string C="00"){
	A = C; 
};

string Registro::Leer(){
	return A;
}

void Registro::Escribir(string B){
	A = B;
}

class Memoria{
public:
	Registro AC = Registro(" ");
	Registro IR = Registro(" ");
	Registro MBR = Registro(" "); 
	Registro MAR = Registro(" "); 
	Registro PC = Registro(" ");
	Registro m[K];
	
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
	string A="CALLATE JUAN";
	Memoria  MEM;
	MEM.AC.Escribir("lele");
	cout<<MEM.AC.Leer();
	
	

	return 0;
}