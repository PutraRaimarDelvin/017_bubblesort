#include <iostream>
using namespace std;


int arr[20];           //Deklarasi array a dengan ukuran 20
int n;               //Deklarasi variable n untuk menyimpan banyaknya elemen pada array


void bubbleSortArray() { //Method untuk mengurungkan array dengan metode bubble sort
    int pass = 1; //step 1

    do {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1; //step 4

        cout << "\nPass" << pass - 1 << ": "; //number of pass
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";  //menampilkan data pada number of pass
        }
        cout << endl;
    } while (pass <= n - 1);
}


int main() {
    //Membuat objek obj dari class Bubblesort
    input();            //Memanggil read() dari class Bubblesort
    bubbleSortArray();  //Memanggil bubbleSortArray() dari class BubbleSort
    display();          //Memanggil display() dari class BubbleSort
    return 0;
}