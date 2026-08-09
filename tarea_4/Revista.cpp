class Revista : public MaterialBiblioteca {
public:
    void mostrarInfo() const override {
        std::cout << "Revista: " << codigo << " - " << titulo << " - " << editorial;
    }
};
