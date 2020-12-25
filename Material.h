#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;
#ifndef MATERIAL_H
#define MATERIAL_H


class Material
{
private:
	string filename = "main-material.bin";

public:
	int id;
	string nombreMaterial;
	float factorDeducible;

	Material();
	Material(string nombreMaterial, float factor, int idNo);
	~Material();

	void imprimir();
	list<Material> getAll();
	bool create();
	Material findById(int id);

};

#endif
