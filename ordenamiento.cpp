#include <iostream>
 using namespace std;
void PrintArray(int *array, int n) {
  for (int i = 0; i < n; ++i)
    cout << array[i] << " " ;
  cout << endl;
}
//INSERTION SORT-------------------------
void InsertionSort(int arr[], int arr_size){
  if(arr_size > 1){
    int size = arr_size;
    for(int i = 1; i < size; ++i){
      int j = i - 1;
      int key = arr[i];
      while(j >= 0 && arr[j] > key){
        arr[j+1] = arr[j];
        --j;
      }
      arr[j+1] = key;
    }
  }
}
//BUBBLE SORT------------------------------
void bubbleSort(int arreglo[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for (j=n-1;j>=i+1;j--){
            if(arreglo[j]<arreglo[j-1]){
                temp=arreglo[j];
                arreglo[j]=arreglo[j-1];
                arreglo[j-1]=temp;
            }
        }
    }
}
//MERGESORT-----------------------------------------
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* creamos arrays temporales */
    int L[n1], R[n2];

    /* copiamos los datos a los arreglos temporales L y R */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* combina los arreglos temporales de nuevo en arr[l..r]*/
    i = 0; // incdice inicial del primer subarreglo
    j = 0; // indice inicial del segundo subarreglo
    k = l; // indice inicial del subarreglo combinado
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* copia los elementos restantes de L[] si hay alguno */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /*Copia los elementos restantes de R[] si hay alguno*/
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/*
l es para el índice izquierdo y r es el índice derecho del subarreglo de arr que se ordenará */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Igual que (l + r) / 2, pero evita el desbordamiento de
        // grandes l y h
        int m = l+(r-l)/2;

        // ordenar primera y segunda mitad
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

//QUICKSORT---------------------------------------------------------------
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/*
Esta función toma el último elemento como pivote,
 coloca el elemento de pivote en su posición correcta
 en la matriz ordenada y coloca todos los más pequeños
 (más pequeños que el pivote) a la izquierda del pivote y
  todos los elementos mayores a la derecha del pivote */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivote
    int i = (low - 1);  // Indice del elemento mas pequeño

    for (int j = low; j <= high- 1; j++)
    {
        // si el eelemento actual es menor o
        // igua al pivote
        if (arr[j] <= pivot)
        {
            i++;    // índice de incremento del elemento más pequeño
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/*
 arr[] --> Array a ordenar,
  low  --> Indice de inicio,
  high  --> indice final */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* p está dividiendo el índice, arr [p] ahora está en el lugar correcto */
        int p = partition(arr, low, high);

        // Ordenar por separado los elementos antes
        // particion y despues particion
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

//radix sort---------------------------------------------------------------
// una funcion para obtener el valor maximo de un arreglo
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}


// Una función para hacer el conteo de arr [] de acuerdo con
// el dígito representado por exp.
void countSort(int arr[], int n, int exp)
{
    int output[n]; // arreglo de salida
    int i, count[10] = {0};

    // almacenar la cuenta de ocureencias en count[]
    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;


// Cambiar count [i] para que count[i] ahora contenga la real
    // posición de este dígito en la salida []
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // constrir el arreglo de salida
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }


// Copie el arreglo de salida a arr [], para que arr [] ahora
    // contenga números ordenados según el dígito actual
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}


// La función principal para eso ordena arr [] de tamaño n usando
// Radix Sort
void radixsort(int arr[], int n)
{

// Encuentra el número máximo para saber el número de dígitos
    int m = getMax(arr, n);

   // Contar ordenando para cada dígito. Tenga en cuenta que en su lugar
    // de pasar el número de dígitos, se pasa la exp. exp es 10 ^ i
    // donde i es el número de dígito actual
    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

int main() {
  int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
  int n = 10;

  cout << "Before Insertion Sort :" << endl;
  PrintArray(array, n);

  //InsertionSort(array, n);
  //bubbleSort(array,n);
  //mergeSort(array,0,n-1);
  //quickSort(array,0 ,n-1);
  radixsort(array,n);
  cout << "After Insertion Sort :" << endl;
  PrintArray(array, n);
  return (0);
}
