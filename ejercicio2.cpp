
#include <iostream>

using namespace std;

int main() {

    int n = 2;
    int mBidemensional[2][2];

    mBidemensional[0][0] = 4;
    mBidemensional[1][0] = 6;    
    mBidemensional[0][1] = 8;
    mBidemensional[1][1] = 2;


    cout << " Impresion en forma de tabla de N: " << n <<  endl;
    for (int fila = 0; fila < 2; fila++ ) {
        for (int col = 0; col < 2; col++ ) {
            cout << mBidemensional[fila][col] << "   ";
        }
        cout << (mBidemensional[fila][0] * mBidemensional[fila][1]) << endl; 
    }

}