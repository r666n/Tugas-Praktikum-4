#include <iostream>
#include <iomanip>
using namespace std;

const int ukuran = 4;

void tm (int matrik[ukuran][ukuran], const string& nama) {
    for (int i = 0; i < ukuran; i++) {
        for (int j = 0; j < ukuran; j++) {
            cout << setw(4) << matrik[i][j];
            }
            cout << endl;
        }
    cout << endl;
    }
    
    int main () {
        int matrik1[ukuran][ukuran] = {
            {1, 0, 2, 0},
            {0, 1, 0, 1},
            {2, 0, 1, 0},
            {0, 2, 0, 1}
            
            };
        
        int matrik2[ukuran][ukuran] = {
            {1, 1, 1, 1},
            {1, 1, 1, 1},
            {2, 2, 2, 2},
            {2, 2, 2, 2}
            
            };
        
        int hasilm[ukuran][ukuran];
        
        for (int i = 0; i < ukuran; i++) {
            for (int j = 0; j < ukuran; j++) {
                hasilm[i][j] =  0;    
                }
            }
        
        for (int i = 0; i < ukuran; i++) {
            for (int j = 0; j < ukuran; j++) {
                for (int k = 0; k < ukuran; k++) {
                    
                    hasilm[i][j] += matrik1[i][k] * matrik2[k][j];
                    
                    }
                }
            }   
        cout << "Nama  : Rendra Adnan Farid " << endl;
        cout << "Nim   : 25104410036" << endl;
        cout << "Prodi : Teknik Informatika 1B " << endl;
        cout << "Tugas Praktikum 4 \n" << endl;
        cout << "---Program Perkalian matrik 3x3---" << endl;
        tm (matrik1, "A");
        tm (matrik2, "B");
        
        cout << "==============================" << endl;
        cout << "Hasil Perkalian Matrik (A x B)" << endl;
        cout << "Matrik A x B : \n" << endl;
        tm (hasilm, "A x B");
        return 0;
        }
        
        
