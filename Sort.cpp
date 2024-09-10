#include <iostream>
#include <algorithm>  // Necesario para std::sort

int main() {
    int numeros[] = {5, 2, 9, 1, 5, 6};  // Arreglo de enteros

    // Obtener el tamaño del arreglo
    int tamano = sizeof(numeros) / sizeof(numeros[0]);

    // Ordenar el arreglo en orden ascendente
    std::sort(numeros, numeros + tamano);

    // Mostrar el resultado ordenado
    std::cout << "Números ordenados: ";
    for (int i = 0; i < tamano; ++i) {
        std::cout << numeros[i] << " ";  // Imprimir cada número del arreglo
    }

    return 0;  // Indicar que el programa terminó correctamente
}
