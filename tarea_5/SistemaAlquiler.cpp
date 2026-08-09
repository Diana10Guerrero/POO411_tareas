#include <iostream>
#include <fstream>
#include <iomanip>
#include <memory>
#include <limits>
#include "SistemaAlquiler.h"
#include "Cliente.h"
#include "Automovil.h"
#include "Motocicleta.h"
#include "Alquiler.h"

using namespace std;

// =========================
//   Constructor
// =========================
SistemaAlquiler::SistemaAlquiler() {
    cargarClientes();
    cargarVehiculos();
    cargarAlquileres();
}

// =========================
//   Menú principal
// =========================
void SistemaAlquiler::mostrarMenu() {
    int opcion;

    do {
        cout << "\n===== SISTEMA DE ALQUILER DE VEHÍCULOS =====\n";
        cout << "1. Registrar cliente\n";
        cout << "2. Registrar automóvil\n";
        cout << "3. Registrar motocicleta\n";
        cout << "4. Ver clientes\n";
        cout << "5. Ver vehículos\n";
        cout << "6. Registrar alquiler\n";
        cout << "7. Registrar devolución\n";
        cout << "8. Ver alquileres activos\n";
        cout << "9. Ver historial de alquileres\n";
        cout << "10. Guardar y salir\n";
        cout << "Seleccione una opción: ";

        opcion = validarEnteroPositivo();

        switch (opcion) {
            case 1: registrarCliente(); break;
            case 2: registrarAutomovil(); break;
            case 3: registrarMotocicleta(); break;
            case 4: verClientes(); break;
            case 5: verVehiculos(); break;
            case 6: registrarAlquiler(); break;
            case 7: registrarDevolucion(); break;
            case 8: verAlquileresActivos(); break;
            case 9: verHistorial(); break;
            case 10: guardarTodo(); break;
            default: cout << "Opción inválida.\n";
        }

    } while (opcion != 10);
}

// =========================
//   Validaciones
// =========================
int SistemaAlquiler::validarEnteroPositivo() {
    int valor;
    while (true) {
        cin >> valor;
        if (!cin.fail() && valor > 0) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return valor;
        }
        cout << "Valor inválido. Intente nuevamente: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

string SistemaAlquiler::validarTexto() {
    string texto;
    do {
        getline(cin, texto);
        if (texto.empty()) cout << "El texto no puede estar vacío. Intente nuevamente: ";
    } while (texto.empty());
    return texto;
}

// =========================
//   Registrar cliente
// =========================
void SistemaAlquiler::registrarCliente() {
    cout << "\n--- Registrar Cliente ---\n";
    cout << "Documento: ";
    string doc = validarTexto();

    if (clientes.count(doc)) {
        cout << "Ya existe un cliente con ese documento.\n";
        return;
    }

    cout << "Nombre completo: ";
    string nombre = validarTexto();

    cout << "Teléfono: ";
    string tel = validarTexto();

    clientes.emplace(doc, Cliente(doc, nombre, tel));
    cout << "Cliente registrado.\n";
}

// =========================
//   Registrar automóvil
// =========================
void SistemaAlquiler::registrarAutomovil() {
    cout << "\n--- Registrar Automóvil ---\n";

    cout << "Matrícula: ";
    string mat = validarTexto();

    if (existeVehiculo(mat)) {
        cout << "Ya existe un vehículo con esa matrícula.\n";
        return;
    }

    cout << "Marca: ";
    string marca = validarTexto();

    cout << "Modelo: ";
    string modelo = validarTexto();

    cout << "Año: ";
    int anio = validarEnteroPositivo();

    cout << "Tarifa diaria: ";
    int tarifa = validarEnteroPositivo();

    cout << "Cantidad de puertas: ";
    int puertas = validarEnteroPositivo();

    vehiculos.push_back(make_unique<Automovil>(mat, marca, modelo, anio, tarifa, puertas));
    cout << "Automóvil registrado.\n";
}

// =========================
//   Registrar motocicleta
// =========================
void SistemaAlquiler::registrarMotocicleta() {
    cout << "\n--- Registrar Motocicleta ---\n";

    cout << "Matrícula: ";
    string mat = validarTexto();

    if (existeVehiculo(mat)) {
        cout << "Ya existe un vehículo con esa matrícula.\n";
        return;
    }

    cout << "Marca: ";
    string marca = validarTexto();

    cout << "Modelo: ";
    string modelo = validarTexto();

    cout << "Año: ";
    int anio = validarEnteroPositivo();

    cout << "Tarifa diaria: ";
    int tarifa = validarEnteroPositivo();

    cout << "Cilindrada: ";
    int cil = validarEnteroPositivo();

    vehiculos.push_back(make_unique<Motocicleta>(mat, marca, modelo, anio, tarifa, cil));
    cout << "Motocicleta registrada.\n";
}

// =========================
//   Ver clientes
// =========================
void SistemaAlquiler::verClientes() {
    cout << "\n--- Lista de Clientes ---\n";
    cout << left << setw(15) << "Documento" << setw(25) << "Nombre" << setw(15) << "Teléfono" << "\n";

    for (auto &p : clientes) {
        cout << setw(15) << p.second.getDocumento()
             << setw(25) << p.second.getNombre()
             << setw(15) << p.second.getTelefono() << "\n";
    }
}

// =========================
//   Ver vehículos
// =========================
void SistemaAlquiler::verVehiculos() {
    cout << "\n--- Lista de Vehículos ---\n";
    cout << left << setw(12) << "Matrícula" << setw(10) << "Tipo"
         << setw(12) << "Marca" << setw(12) << "Modelo"
         << setw(6) << "Año" << setw(10) << "Tarifa"
         << setw(12) << "Disponible" << "\n";

    for (auto &v : vehiculos) {
        cout << setw(12) << v->getMatricula()
             << setw(10) << v->obtenerTipo()
             << setw(12) << v->getMarca()
             << setw(12) << v->getModelo()
             << setw(6) << v->getAnio()
             << setw(10) << v->calcularTarifaDiaria()
             << setw(12) << (v->estaDisponible() ? "Sí" : "No") << "\n";
    }
}

// =========================
//   Registrar alquiler
// =========================
void SistemaAlquiler::registrarAlquiler() {
    cout << "\n--- Registrar Alquiler ---\n";

    cout << "Documento del cliente: ";
    string doc = validarTexto();

    if (!clientes.count(doc)) {
        cout << "El cliente no existe.\n";
        return;
    }

    int activos = contarAlquileresActivos(doc);
    if (activos >= 2) {
        cout << "El cliente ya tiene dos alquileres activos.\n";
        return;
    }

    cout << "Matrícula del vehículo: ";
    string mat = validarTexto();

    Vehiculo* veh = buscarVehiculo(mat);
    if (!veh) {
        cout << "El vehículo no existe.\n";
        return;
    }

    if (!veh->estaDisponible()) {
        cout << "El vehículo no está disponible.\n";
        return;
    }

    cout << "Cantidad de días: ";
    int dias = validarEnteroPositivo();

    int codigo = generarCodigoAlquiler();
    int tarifa = veh->calcularTarifaDiaria();

    alquileres.emplace_back(codigo, doc, mat, dias, tarifa);
    veh->setDisponible(false);

    cout << "Alquiler registrado. Código: " << codigo << "\n";
}

// =========================
//   Registrar devolución
// =========================
void SistemaAlquiler::registrarDevolucion() {
    cout << "\n--- Registrar Devolución ---\n";

    cout << "Código del alquiler: ";
    int codigo = validarEnteroPositivo();

    for (auto &a : alquileres) {
        if (a.getCodigo() == codigo && a.estaActivo()) {

            int total = a.getDias() * a.getTarifa();
            cout << "Costo total: " << total << "\n";

            a.finalizar();

            Vehiculo* v = buscarVehiculo(a.getMatriculaVehiculo());
            if (v) v->setDisponible(true);

            cout << "Devolución registrada.\n";
            return;
        }
    }

    cout << "No existe un alquiler activo con ese código.\n";
}

// =========================
//   Ver alquileres activos
// =========================
void SistemaAlquiler::verAlquileresActivos() {
    cout << "\n--- Alquileres Activos ---\n";
    cout << left << setw(8) << "Código" << setw(15) << "Cliente"
         << setw(12) << "Vehículo" << setw(8) << "Días"
         << setw(10) << "Tarifa" << "\n";

    for (auto &a : alquileres) {
        if (a.estaActivo()) {
            cout << setw(8) << a.getCodigo()
                 << setw(15) << a.getDocumentoCliente()
                 << setw(12) << a.getMatriculaVehiculo()
                 << setw(8) << a.getDias()
                 << setw(10) << a.getTarifa() << "\n";
        }
    }
}

// =========================
//   Ver historial
// =========================
void SistemaAlquiler::verHistorial() {
    cout << "\n--- Historial de Alquileres ---\n";
    cout << left << setw(8) << "Código" << setw(15) << "Cliente"
         << setw(12) << "Vehículo" << setw(8) << "Días"
         << setw(10) << "Tarifa" << setw(12) << "Estado" << "\n";

    for (auto &a : alquileres) {
        cout << setw(8) << a.getCodigo()
             << setw(15) << a.getDocumentoCliente()
             << setw(12) << a.getMatriculaVehiculo()
             << setw(8) << a.getDias()
             << setw(10) << a.getTarifa()
             << setw(12) << (a.estaActivo() ? "Activo" : "Finalizado") << "\n";
    }
}

// =========================
//   Persistencia
// =========================
void SistemaAlquiler::guardarTodo() {
    guardarClientes();
    guardarVehiculos();
    guardarAlquileres();
    cout << "Datos guardados.\n";
}

// =========================
//   Métodos auxiliares
// =========================
bool SistemaAlquiler::existeVehiculo(const string &mat) {
    return buscarVehiculo(mat) != nullptr;
}

Vehiculo* SistemaAlquiler::buscarVehiculo(const string &mat) {
    for (auto &v : vehiculos)
        if (v->getMatricula() == mat)
            return v.get();
    return nullptr;
}

int SistemaAlquiler::contarAlquileresActivos(const string &doc) {
    int c = 0;
    for (auto &a : alquileres)
        if (a.getDocumentoCliente() == doc && a.estaActivo())
            c++;
    return c;
}

int SistemaAlquiler::generarCodigoAlquiler() {
    int max = 0;
    for (auto &a : alquileres)
        if (a.getCodigo() > max)
            max = a.getCodigo();
    return max + 1;
}

// =========================
//   Cargar y guardar archivos
// =========================

void SistemaAlquiler::cargarClientes() {
    ifstream f("clientes.txt");
    if (!f) return;

    string doc, nom, tel;
    while (f >> doc) {
        f.ignore();
        getline(f, nom);
        getline(f, tel);
        clientes.emplace(doc, Cliente(doc, nom, tel));
    }
}

void SistemaAlquiler::guardarClientes() {
    ofstream f("clientes.txt");
    for (auto &p : clientes) {
        f << p.second.getDocumento() << "\n"
          << p.second.getNombre() << "\n"
          << p.second.getTelefono() << "\n";
    }
}

void SistemaAlquiler::cargarVehiculos() {
    ifstream f("vehiculos.txt");
    if (!f) return;

    string tipo, mat, marca, modelo;
    int anio, tarifa, extra;

    while (f >> tipo >> mat >> marca >> modelo >> anio >> tarifa >> extra) {
        if (tipo == "Automovil")
            vehiculos.push_back(make_unique<Automovil>(mat, marca, modelo, anio, tarifa, extra));
        else
            vehiculos.push_back(make_unique<Motocicleta>(mat, marca, modelo, anio, tarifa, extra));
    }
}

void SistemaAlquiler::guardarVehiculos() {
    ofstream f("vehiculos.txt");
    for (auto &v : vehiculos) {
        f << v->obtenerTipo() << " "
          << v->getMatricula() << " "
          << v->getMarca() << " "
          << v->getModelo() << " "
          << v->getAnio() << " "
          << v->calcularTarifaDiaria() << " ";

        if (v->obtenerTipo() == "Automovil")
            f << dynamic_cast<Automovil*>(v.get())->getPuertas();
        else
            f << dynamic_cast<Motocicleta*>(v.get())->getCilindrada();

        f << "\n";
    }
}

void SistemaAlquiler::cargarAlquileres() {
    ifstream f("alquileres.txt");
    if (!f) return;

    int cod, dias, tarifa;
    string doc, mat, estado;

    while (f >> cod >> doc >> mat >> dias >> tarifa >> estado) {
        Alquiler a(cod, doc, mat, dias, tarifa);
        if (estado == "Finalizado") a.finalizar();
        alquileres.push_back(a);
    }
}

void SistemaAlquiler::guardarAlquileres() {
    ofstream f("alquileres.txt");
    for (auto &a : alquileres) {
        f << a.getCodigo() << " "
          << a.getDocumentoCliente() << " "
          << a.getMatriculaVehiculo() << " "
          << a.getDias() << " "
          << a.getTarifa() << " "
          << (a.estaActivo() ? "Activo" : "Finalizado") << "\n";
    }
}
