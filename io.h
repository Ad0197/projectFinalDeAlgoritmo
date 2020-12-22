#include<iostream>
#include<string>
#include <fstream>
#include <map>
#include "Material.cpp"

#ifndef IO_H
#define IO_H

using namespace std;

void getMapRegister(string filename){
	ifstream file;
	ofstream file2;
	string text;
	Material material = Material();
	material.id = 123456789;
	material.nombreMaterial = "Marmol";
	material.factorDeducible = 0.55f;
		
	file2.open(filename);
	file2.write((char *) & material, sizeof(material));
	file2.close();
	file.open(filename);
	if(file.fail()){
		cerr<< "Error abriendo el file";
		exit(1);
	}
	
	while(!file.eof()){
		char words[100];
		file.getline(words, 100);
		cout<<words;
	}
	
	file.close();
}

#endif
