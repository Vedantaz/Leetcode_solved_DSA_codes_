#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
   for(int i = 0; i < n-1; i++) {
      for (int j = 0; j < n-i-1; j++) {
         if (arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
         }
      }
   }
}

void printArray(int arr[], int size) {
   for (int i = 0; i < size; i++)
       cout << arr[i] << " ";
   cout << endl;
}

int main() {
   int arr[] = {64, 34, 25, 12, 22, 11, 90};
   int n = sizeof(arr)/sizeof(arr[0]);
   bubbleSort(arr, n);
   cout<<"Sorted array: \n";
   printArray(arr, n);
   return 0;
}

// Selection sorting algorithm

#include<iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int min_idx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    cout << "Sorted array is: \n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// insertion sort algo and code

#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
   int key, j;
   for(int i = 1; i < n; i++) {
      key = arr[i];
      j = i - 1;
      while(j >= 0 && arr[j] > key) {
         arr[j+1] = arr[j];
         j = j-1;
      }
      arr[j+1] = key;
   }
}

void printArray(int arr[], int n) {
   for(int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << endl;
}

int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];   // Create an array with given number of elements
   cout << "Enter the elements:" << endl;
   
   for(int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   
   cout << "Array before Sorting: ";
   printArray(arr, n);
   insertionSort(arr, n);
   cout << "Array after Sorting: ";
   printArray(arr, n);
}

3 4 10 2 ...
3 4 2 10 ...
2 3 4 10 ...
2 3 4 10 12 ...
2 3 4 10 12 1 ...
1 2 3 4 10 12 ...
1 2 3 4 10 12 5 ...
1 2 3 4 5 10 12 ...
1 2 3 4 5 10 12 6 ...
1 2 3 4 5 6 10 12 ...   // GOT ANS

// Merge sort


// divide the array from middle - sort the divided array - merge that array with sorting itself
// compare both sorted algo and then arrange it
// o(log(n)), O(nlog(n))
//  best        worst
//  1            n log(n)




   #include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
   int i, j, k;
   int n1 = m - l + 1;
   int n2 = r - m;
   
   int L[n1], R[n2];
   
   for(i = 0; i < n1; i++)
      L[i] = arr[l + i];
   for(j = 0; j < n2; j++)
      R[j] = arr[m + 1 + j];
   
   i = 0;
   j = 0;
   k = l;
   
   while(i < n1 && j < n2) {
      if(L[i] <= R[j]) {
         arr[k] = L[i];
         i++;
      }
      else {
         arr[k] = R[j];
         j++;
      }
      k++;
   }
   
   while(i < n1) {
      arr[k] = L[i];
      i++;
      k++;
   }
   
   while(j < n2) {
      arr[k] = R[j];
      j++;
      k++;
   }
}

void mergeSort(int arr[], int l, int r) {
   if(l < r) {
      int m = l + (r - l) / 2;
      
      mergeSort(arr, l, m);
      mergeSort(arr, m + 1, r);
      
      merge(arr, l, m, r);
   }
}

void printArray(int arr[], int size) {
   int i;
   for(i = 0; i < size; i++)
      cout << arr[i] << " ";
   cout << endl;
}

int main() {
   int arr[] = {12, 11, 13, 5, 6, 7};
   int size = sizeof(arr) / sizeof(arr[0]);
   
   mergeSort(arr, 0, size - 1);
   
   cout << "Sorted array: \n";
   printArray(arr, size);
   
   return 0;
}

// quicksort algo and code

// rand partition function , make it pivot element
// on  left smaller elements , on right side arrange bigger element

#include<iostream>
using namespace std;

int partition(int arr[], int low, int high) {
   int pivot = arr[high];  
   int i = (low - 1); 

   for(int j = low; j <= high - 1; j++) {
      if(arr[j] < pivot) {
         i++; 
         swap(arr[i], arr[j]);
      }
   }
   swap(arr[i + 1], arr[high]);
   return(i + 1);
}

void quickSort(int arr[], int low, int high) {
   if(low < high) {
      int pi = partition(arr, low, high);
      
      quickSort(arr, low, pi - 1);
      quickSort(arr, pi + 1, high);
   }
}

void printArray(int arr[], int size) {
   int i;
   for(i = 0; i < size; i++)
      cout << arr[i] << " ";
   cout << endl;
}

int main() {
   int arr[] = {10, 7, 8, 9, 1, 5};
   int n = sizeof(arr) / sizeof(arr[0]);
   
   quickSort(arr, 0, n - 1);
   
   cout << "Sorted array: \n";
   printArray(arr, n);
   
   return 0;
}

// counting sort
#include<iostream>
using namespace std;

int partition(int arr[], int low, int high) {
   int pivot = arr[high];  
   int i = (low - 1); 

   for(int j = low; j <= high - 1; j++) {
      if(arr[j] < pivot) {
         i++; 
         swap(arr[i], arr[j]);
      }
   }
   swap(arr[i + 1], arr[high]);
   return(i + 1);
}

void quickSort(int arr[], int low, int high) {
   if(low < high) {
      int pi = partition(arr, low, high);
      
      quickSort(arr, low, pi - 1);
      quickSort(arr, pi + 1, high);
   }
}

void printArray(int arr[], int size) {
   int i;
   for(i = 0; i < size; i++)
      cout << arr[i] << " ";
   cout << endl;
}

int main() {
   int arr[] = {10, 7, 8, 9, 1, 5};
   int n = sizeof(arr) / sizeof(arr[0]);
   
   quickSort(arr, 0, n - 1);
   
   cout << "Sorted array: \n";
   printArray(arr, n);
   
   return 0;
}

// radix sort 
