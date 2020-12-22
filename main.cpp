#include<iostream>
#include<string>
#include "io.h"

using namespace std;

void imprimir(string word){
	word = word.find(",");
	cout<<word[0];
}

int main (int argc, char *argv[]) {
	getMapRegister("map.bin");
	cout<<"Hola Mundo";
	return 0;
}

