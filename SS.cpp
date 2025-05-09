#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

// Función para intercambiar la posición de dos elementos
void intercambiar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Función para imprimir un array
void imprimirArray(int array[], int tamaño) {
  for (int i = 0; i < tamaño; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void ordenamientoSeleccion(int array[], int tamaño) {
  for (int paso = 0; paso < tamaño - 1; paso++) {
    int indice_minimo = paso;
    for (int i = paso + 1; i < tamaño; i++) {

      // Para ordenar en orden descendente, cambia < a > en esta línea.
      // Selecciona el elemento mínimo en cada bucle.
      if (array[i] < array[indice_minimo])
        indice_minimo = i;
    }

    // Coloca el mínimo en la posición correcta
    intercambiar(&array[indice_minimo], &array[paso]);
  }
}

// Código principal
int main() {
    int datos[1000] = {45, -12, 9, 0, -100, 87, 23, -34, 56, 8,
                           -89, 67, 12, 43, -1, 92, -5, 37, -16, 74,
                           15, -8, 93, 22, -44, 5, -73, 64, -33, 51,
                           86, -92, 19, 40, 85, -60, 30, -20, 99, -25,
                           70, 11, -49, 62, -71, 34, 90, -12, 55, -4,
                           77, -58, 24, -47, 48, -16, 83, 39, -1, 68,
                           12, 56, 91, -8, 73, -10, 43, -90, 67, 24,
                           -82, 59, -39, 41, 66, -46, 31, 52, -27, 93
                            -12, 9, 0, -100, 87, 23, -34, 56, 8,
                           -89, 67, 12, 43, -1, 92, -5, 37, -16, 74,
                           15, -8, 93, 22, -44, 5, -73, 64, -33, 51,
                           86, -92, 19, 40, 85, -60, 30, -20, 99, -25,
                           70, 11, -49, 62, -71, 34, 90, -12, 55, -4,
                           77, -58, 24, -47, 48, -16, 83, 39, -1, 68,
                           12, 56, 91, -8, 73, -10, 43, -90, 67, 24,
                           -82, 59, -39, 41, 66, -46, 31, 52, -27, 93
                            -12, 9, 0, -100, 87, 23, -34, 56, 8,
                           -89, 67, 12, 43, -1, 92, -5, 37, -16, 74,
                           15, -8, 93, 22, -44, 5, -73, 64, -33, 51,
                           86, -92, 19, 40, 85, -60, 30, -20, 99, -25,
                           70, 11, -49, 62, -71, 34, 90, -12, 55, -4,
                           77, -58, 24, -47, 48, -16, 83, 39, -1, 68,
                           12, 56, 91, -8, 73, -10, 43, -90, 67, 24,
                           -82, 59, -39, 41, 66, -46, 31, 52, -27, 93
                            -12, 9, 0, -100, 87, 23, -34, 56, 8,
                           -89, 67, 12, 43, -1, 92, -5, 37, -16, 74,
                           15, -8, 93, 22, -44, 5, -73, 64, -33, 51,
                           86, -92, 19, 40, 85, -60, 30, -20, 99, -25,
                           70, 11, -49, 62, -71, 34, 90, -12, 55, -4,
                           77, -58, 24, -47, 48, -16, 83, 39, -1, 68,
                           12, 56, 91, -8, 73, -10, 43, -90, 67, 24,
                           -82, 59, -39, 41, 66, -46, 31, 52, -27, 93
                            -12, 9, 0, -100, 87, 23, -34, 56, 8,
                           -89, 67, 12, 43, -1, 92, -5, 37, -16, 74,
                           15, -8, 93, 22, -44, 5, -73, 64, -33, 51,
                           86, -92, 19, 40, 85, -60, 30, -20, 99, -25,
                           70, 11, -49, 62, -71, 34, 90, -12, 55, -4,
                           77, -58, 24, -47, 48, -16, 83, 39, -1, 68,
                           12, 56, 91, -8, 73, -10, 43, -90, 67, 24,
                           -82, 59, -39, 41, 66, -46, 31, 52, -27, 93
                            -12, 9, 0, -100, 87, 23, -34, 56, 8,
                           -89, 67, 12, 43, -1, 92, -5, 37, -16, 74,
                           15, -8, 93, 22, -44, 5, -73, 64, -33, 51,
                           86, -92, 19, 40, 85, -60, 30, -20, 99, -25,
                           70, 11, -49, 62, -71, 34, 90, -12, 55, -4,
                           77, -58, 24, -47, 48, -16, 83, 39, -1, 68,
                           12, 56, 91, -8, 73, -10, 43, -90, 67, 24,
                           -82, 59, -39, 41, 66, -46, 31, 52, -27, 93
                            -12, 9, 0, -100, 87, 23, -34, 56, 8,
                           -89, 67, 12, 43, -1, 92, -5, 37, -16, 74,
                           15, -8, 93, 22, -44, 5, -73, 64, -33, 51,
                           86, -92, 19, 40, 85, -60, 30, -20, 99, -25,
                           70, 11, -49, 62, -71, 34, 90, -12, 55, -4,
                           77, -58, 24, -47, 48, -16, 83, 39, -1, 68,
                           12, 56, 91, -8, 73, -10, 43, -90, 67, 24,
                           -82, 59, -39, 41, 66, -46, 31, 52, -27, 93
                            -12, 9, 0, -100, 87, 23, -34, 56, 8,
                           -89, 67, 12, 43, -1, 92, -5, 37, -16, 74,
                           15, -8, 93, 22, -44, 5, -73, 64, -33, 51,
                           86, -92, 19, 40, 85, -60, 30, -20, 99, -25,
                           70, 11, -49, 62, -71, 34, 90, -12, 55, -4,
                           77, -58, 24, -47, 48, -16, 83, 39, -1, 68,
                           12, 56, 91, -8, 73, -10, 43, -90, 67, 24,
                           -82, 59, -39, 41, 66, -46, 31, 52, -27, 93
                            -12, 9, 0, -100, 87, 23, -34, 56, 8,
                           -89, 67, 12, 43, -1, 92, -5, 37, -16, 74,
                           15, -8, 93, 22, -44, 5, -73, 64, -33, 51,
                           86, -92, 19, 40, 85, -60, 30, -20, 99, -25,
                           70, 11, -49, 62, -71, 34, 90, -12, 55, -4,
                           77, -58, 24, -47, 48, -16, 83, 39, -1, 68,
                           12, 56, 91, -8, 73, -10, 43, -90, 67, 24,
                           -82, 59, -39, 41, 66, -46, 31, 52, -27, 93
                            -12, 9, 0, -100, 87, 23, -34, 56, 8,
                           -89, 67, 12, 43, -1, 92, -5, 37, -16, 74,
                           15, -8, 93, 22, -44, 5, -73, 64, -33, 51,
                           86, -92, 19, 40, 85, -60, 30, -20, 99, -25,
                           70, 11, -49, 62, -71, 34, 90, -12, 55, -4,
                           77, -58, 24, -47, 48, -16, 83, 39, -1, 68,
                           12, 56, 91, -8, 73, -10, 43, -90, 67, 24,
                           -82, 59, -39, 41, 66, -46, 31, 52, -27, 93
                            -12, 9, 0, -100, 87, 23, -34, 56, 8,
                           -89, 67, 12, 43, -1, 92, -5, 37, -16, 74,
                           15, -8, 93, 22, -44, 5, -73, 64, -33, 51,
                           86, -92, 19, 40, 85, -60, 30, -20, 99, -25,
                           70, 11, -49, 62, -71, 34, 90, -12, 55, -4,
                           77, -58, 24, -47, 48, -16, 83, 39, -1, 68,
                           12, 56, 91, -8, 73, -10, 43, -90, 67, 24,
                           -82, 59, -39, 41, 66, -46, 31, 52, -27, 93};

  int tamaño = sizeof(datos) / sizeof(datos[0]);
  
  auto inicio = high_resolution_clock::now();
  ordenamientoSeleccion(datos, tamaño);
  auto fin = high_resolution_clock::now();
  auto duración = duration_cast<microseconds>(fin - inicio);

  cout << "Array ordenado en Orden Ascendente:\n";
  cout << "Tiempo de ejecución: " << duración.count() << " microsegundos" << endl;
  imprimirArray(datos, tamaño);
}
