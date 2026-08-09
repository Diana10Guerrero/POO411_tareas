class MaterialBiblioteca {
public:
    virtual void mostrarInfo() const = 0;
    virtual bool estaDisponible() const = 0;
    virtual void prestar() = 0;
    virtual void devolver() = 0;
    virtual ~MaterialBiblioteca() {}
};
