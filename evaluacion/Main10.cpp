int main() {
  std::vector<std::unique_ptr<Personaje>> personajes;
  std::vector<std::unique_ptr<Mago>> Magos;
  std::vector<std::unique_ptr<Guerrero>> Guerreros;
  int opcion = -1;

  while (opcion != 0) {
    std::cout << "\n=== Personaje ===\n";
    std::cout << "1. Registrar personaje\n";
    std::cout << "2. Registrar mago\n";
    std::cout << "3. Registrar guerrero\n";
    std::cout << "4. ver informacion personajes\n";
    std::cout << "5. ver informacion de magos\n";
    std::cout << "6. ver informacion de guerreros\n";
    std::cout << "0. Salir\n";
    std::cout << "Opcion: ";

    std::cin >> opcion;
    std::cin.ignore();

    if (opcion == 1) {
      registrar(personajes);
    } else if (opcion == 2) {
      registrar(Magos);
    } else if (opcion == 3) {
      registrar(Guerreros);
    } else if (opcion == 4) {
      mostrarInfo(personajes, magos, guerreros);
    } else if (opcion == 5) {
      mostrarPodermagico(Magos);
    } else if (opcion == 6) {
      mostrarFuerza(Guerreros);
    } else if (opcion != 0) {
      std::cout << "Opcion no valida.\n";
    }
  }

  return 0;
}
