#include <iostream>
#include <algorithm> // util para std::max
using namespace std;

// Asumiendo la estructura Nodo del Ejercicio 2
struct Nodo {
    int valor;
    Nodo* izquierdo;
    Nodo* derecho;
    Nodo(int v) : valor(v), izquierdo(nullptr), derecho(nullptr) {}
};

int calcularAltura(Nodo* raiz) {
    // TODO: Implementa tu lógica aquí
    // Caso base
    if (raiz == nullptr) {
    return 0;
    }
    // Altura del subárbol izquierdo
    int alturaIzq = calcularAltura(raiz->izquierdo);

    // Altura del subárbol derecho
    int alturaDer = calcularAltura(raiz->derecho);

    // Retorna la mayor altura + 1
    return max(alturaIzq, alturaDer) + 1;
}

int main() {
    Nodo* raiz = new Nodo(1);
    raiz->derecho = new Nodo(2);
    raiz->derecho->izquierdo = new Nodo(3);
    
    cout << "--- Prueba Ejercicio 3 ---" << endl;
    cout << "Altura esperada: 3" << endl;
    cout << "Altura calculada: " << calcularAltura(raiz) << endl;
    cout << "Altura de arbol nulo (esperado 0): " << calcularAltura(nullptr) << endl;

    return 0;
}