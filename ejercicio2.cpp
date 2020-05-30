
#include <iostream>

using namespace std;

int main() {

    int n = 2;
    int mBidemensional[2][2];

    cout << "Ingrese un numero del 1 al 10" << endl;
    cin>>n;

    for (int fila = 0; fila < 2; fila++ ) {
        for (int col = 0; col < 2; col++ ) {
           
          int multiplo;
          do{
            multiplo = random() % 10;
          } while ((multiplo % n) == 0);          
          mBidemensional[fila][col] = multiplo;
        }
    }
    cout << " Impresion en forma de tabla" << endl;

    for (int fila = 0; fila < 2; fila++ ) {
        for (int col = 0; col < 2; col++ ) {
            
            cout << mBidemensional[fila][col] << "   ";

        }

        cout << (mBidemensional[fila][0] * mBidemensional[fila][1]) << " | " << endl;
    }
    

}