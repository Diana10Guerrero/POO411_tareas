class Libro : public MaterialBiblioteca {
public:
    void mostrarInfo() const override {
        std::cout << "Libro: " << codigo << " - " << titulo << " - " << autor;
    }
};
