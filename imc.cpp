#include <iostream>
using namespace std;
int main() {
    double poids(74.5);
    double taille(1.75);

    //Entrées des valeurs
    cout << "Entrez un poids en Kg : ";
    cin >> poids;
    cout << "Entrez une taille en mètre : ";
    cin >> taille;
    double imc(poids / (taille*taille));

    cout<< "Pour " << poids << " Kg et " << taille
    << " m, l'IMC est de " << imc << endl;
return 0;
}

