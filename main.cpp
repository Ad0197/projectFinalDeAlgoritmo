#include "Material.cpp"

using namespace std;

int main (int argc, char *argv[]) {
	cout<<"Vamos a ver"<<endl;
	Material material = Material();
	Material material2 = Material();
	material.nombreMaterial= "ladrilla";
	material.factorDeducible = 0.10f;
	material.create();
	material2.nombreMaterial = "hipnosis";
	material2.create();
	list<Material> mats = material2.getAll();
	list<Material> :: iterator it;
	for(it = mats.begin(); it != mats.end(); it++){
		it->imprimir();
	}
	return 0;
}


