
using namespace std;
#ifndef MATERIAL_H
#define MATERIAL_H


class Material
{
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
	void findById(int id);

};

#endif
