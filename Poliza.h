#include <list>

using namespace std;

class Poliza {
    public:
        int id;
        Inmueble inmuble;
        list<Deducible> deducibles;

        Poliza();
        ~Poliza();

        void create();
        float subtotal();
        void findById(int id);

        void imprimir();
};
