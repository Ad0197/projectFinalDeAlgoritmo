#include <list>
#include "Inmueble.h"
#include "Deducible.h"

using namespace std;

class Poliza {
    public:
        int id;
        Inmueble inmuble;
        list<Deducible> deducibles;

        Poliza();
        ~Poliza();

        void create();
        void subtotal();
        void findById(int id);

        void imprimir();
};