
#include <string>

using namespace std;
#ifndef MATERIAL_H
#define MATERIAL_H

class Material {
public:
	int id;
	string nombreMaterial;
	float factorDeducible;
	Material();
	~Material();

	void imprimir();
};

#endif

