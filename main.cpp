/**
* \file main.cpp
 * \version 1.0.0
 * \author FEUZET KITIO Russelle
 * \date : 08.10.2024
 * \brief : Listeur de nombres premiers
 */

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    int limite;
    string reponse;
    recommence:
    cout << "Entrez une valeur [2-1000]: ";
    cin >> limite;
    if(limite<2 or limite>1000) {
        goto recommence;
    }
    else {
        cout << "Voici la liste des nombres premiers " << endl;
        for (int num = 2, col = 0; num <= limite; ++num) {
            bool estPremier = true;
            for (int i = 2; i <= num / 2; ++i) {
                if (num % i == 0) {
                    estPremier = false;
                    break;
                }
            }
            if (estPremier == true) {
                cout << '\t' << num << " ";
                col++;
                if (col == 5) {
                    cout << endl;           // Nouvelle ligne après 5 nombres
                    col = 0;                // Reinitialiser la colonne
                }
            }
        }
    }
    cout << endl;
    recommence2:
    cout << "Voulez-vous recommencer? [O/N]"<< endl;
    cin >> reponse;
    if (reponse == "o") {
        goto recommence;
    }
    else if (reponse == "n") {
        cout << endl;
    }
    else {
        goto recommence2;
    }
    return EXIT_SUCCESS;
}
