#include <string>
#ifndef DEDUCIBLE_H
#define DEDUCIBLE_H

class Deducible
{
public:
	int idDeducible;
	string nombreDeducible;
	float factorDedusible;

	Deducible();
	~Deducible();

	void imprimir();
	void create();
	void findById(int id);
};

#endif
