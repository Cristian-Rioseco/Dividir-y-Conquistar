#include <iostream>
#include <chrono> // Para medir el tiempo de ejecución


using namespace std;
using namespace std::chrono; // Para evitar escribir std::chrono:: cada vez

// Función para intercambiar elementos
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// Función para imprimir el array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// Función para encontrar el punto de partición
int partition(int array[], int low, int high) {
  // Selecciona el último elemento como pivote
  int pivot = array[high];
  // Puntero para el elemento mayor
  int i = (low - 1);

  // Recorre cada elemento del array y lo compara con el pivote
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      // Si se encuentra un elemento menor que el pivote, intercámbialo
      i++;
      swap(&array[i], &array[j]);
    }
  }
  
  // Intercambia el pivote con el elemento mayor en i
  swap(&array[i + 1], &array[high]);
  
  // Retorna el punto de partición
  return (i + 1);
}

// Función Quicksort recursiva
void quickSort(int array[], int low, int high) {
  if (low < high) {
    // Encuentra el pivote tal que los elementos menores que el pivote están a la izquierda
    // y los elementos mayores están a la derecha
    int pi = partition(array, low, high);
    
    // Llama recursivamente a Quicksort para las sublistas
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

int main() {
  int data[1000] = {
        978, 684, 321, 415, 187, 946, 502, 781, 234, 512,
        389, 746, 920, 198, 335, 605, 792, 948, 267, 453,
        132, 501, 764, 809, 354, 596, 743, 417, 890, 213,
        673, 875, 492, 301, 658, 971, 146, 759, 430, 580,
        296, 721, 401, 142, 678, 340, 795, 942, 527, 313,
        672, 481, 359, 904, 278, 154, 635, 299, 814, 499,
        283, 194, 815, 407, 560, 488, 743, 296, 905, 372,
        638, 479, 750, 229, 467, 306, 829, 947, 198, 659,
        354, 401, 562, 823, 294, 752, 370, 961, 411, 672,
        498, 231, 614, 781, 380, 295, 809, 674, 513, 187,
        374, 928, 220, 604, 162, 483, 905, 348, 723, 142,
        946, 340, 563, 217, 823, 674, 359, 780, 441, 292,
        891, 435, 786, 564, 276, 482, 692, 317, 102, 689,
        915, 254, 341, 709, 263, 860, 139, 577, 482, 665,
        305, 876, 354, 721, 238, 691, 910, 453, 284, 337,
        725, 189, 678, 829, 164, 607, 293, 920, 471, 358,
        849, 193, 263, 468, 576, 795, 820, 501, 299, 148,
        376, 509, 822, 930, 411, 742, 589, 187, 683, 159,
        292, 713, 560, 912, 479, 671, 863, 340, 231, 450,
        671, 842, 394, 252, 501, 308, 913, 264, 138, 478,
        596, 809, 337, 494, 270, 610, 829, 385, 401, 174,
        278, 763, 294, 398, 124, 681, 385, 201, 932, 104,
        597, 236, 745, 182, 619, 304, 759, 271, 437, 181,
        905, 395, 807, 694, 281, 374, 259, 138, 532, 467,
        683, 415, 295, 580, 341, 690, 421, 187, 370, 209,
        603, 494, 788, 912, 631, 259, 389, 423, 102, 654,
        798, 192, 421, 850, 326, 105, 491, 646, 701, 828,
        216, 279, 918, 364, 729, 496, 508, 298, 621, 380,
        751, 472, 343, 219, 851, 128, 472, 311, 596, 701,
        372, 163, 474, 251, 689, 212, 793, 446, 783, 497,
        629, 348, 563, 137, 209, 297, 876, 572, 812, 316,
        919, 284, 480, 358, 294, 106, 702, 467, 263, 312,
        537, 814, 458, 235, 138, 299, 611, 342, 197, 541,
        195, 290, 613, 182, 415, 870, 594, 453, 780, 139
    };

  int n = sizeof(data) / sizeof(data[0]);
  // Inicia el reloj
  auto start = high_resolution_clock::now();
  // Ejecuta Quicksort
  quickSort(data, 0, n - 1);
  // Detiene el reloj
  auto stop = high_resolution_clock::now();
  // Calcula el tiempo transcurrido
  auto duration = duration_cast<microseconds>(stop - start);
  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
  // Imprime el tiempo de ejecución
  cout << "Time taken by QuickSort: " << duration.count() << " microseconds" << endl;
  return 0;
}

