int main() {
  std::vector<Personaje*> lista;
  int opcion = -1;

  while (opcion != 0) {
    std::cout << "\n=== Registro de personajes ===\n";
    std::cout << "1. Registrar guerrero\n";
    std::cout << "2. Registrar mago\n";
    std::cout << "3. Mostrar personajes\n";
    std::cout << "0. Salir\n";
    std::cout << "Opcion: ";

    std::cin >> opcion;
    std::cin.ignore();

    if (opcion == 1) {
      registrarPersonaje(lista);
    } else if (opcion == 2) {
      registrarMago(lista);
    } else if (opcion == 3) {
      mostrarPersonajes(lista);
    } else if (opcion != 0) {
      std::cout << "Opcion no valida.\n";
    }
  }
};
  void mostrarPersonajes(const std::vector<Personaje*>& lista) {
    if (lista.empty()) {
        std::cout << "No hay personajes registrados.\n";
        return;
    }

    std::cout << "\n=== Lista de personajes ===\n";
    for (const auto& personaje : lista) {
        personaje->mostrarInfo();
        std::cout << "-------------------------\n";
    }

    void registrarPersonaje(std::vector<Personaje*>& lista) {
    std::string nombre;
    int vida, nivel;
    std::string fuerza;

    std::cout << "Ingrese el nombre del guerrero: ";
    std::getline(std::cin, nombre);
    std::cout << "Ingrese la vida del guerrero: ";
    std::cin >> vida;
    std::cout << "Ingrese el nivel del guerrero: ";
    std::cin >> nivel;
    std::cin.ignore(); // Limpiar el buffer de entrada
    std::cout << "Ingrese la fuerza del guerrero: ";
    std::getline(std::cin, fuerza);
    lista.push_back(new Guerrero(vida, nombre, nivel, fuerza))

  return 0;
};