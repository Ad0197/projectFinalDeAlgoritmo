
using namespace std;

class Inmueble {
    public:
        int id;
        string nombre;
        string direccion;
        string telefono;
        Material material;
        bool reemplazo;
        float base;

        Inmueble();
        ~Inmueble();

        void create();
        void findById(int id);
        void imprimir();
};