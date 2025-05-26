#include <iostream>
#include <cmath>
/* Pour résoudre une équation du second degré*/
using namespace::std;

int main(){

    double a(0.0);
    double b(0.0);
    double c(0.0);

    //Entrées des valeurs
    cout<<"Entrez une valeur non nulle pour a : ";
    cin>>a;
    if(a==0.0){
        cerr << "Erreur : aest nul :-(" << endl; 
        return(1); //Sortie du programme
    }
    cout<<"Entrez une valeur non nulle pour b : ";
    cin>>b;
    cout<<"Entrez une valeur non nulle pour c : ";
    cin>>c;

    // Déclaration du détrerminant delta
    double delta(b*b-4.0*a*c);

    if (delta < 0.0){
        cout << "Il n'y a pas de solution dans R" << endl;
    }
    else if (delta > 0.0){
        cout << "Deux solutions : "<< (-b-sqrt(delta))/(2.0*a) << " et " <<  (-b+sqrt(delta))/(2.0*a) << endl;
    }
    else{
        cout << "Une solution unique : " << -b/(2.0*a) << endl;
    }
    
    return 0;
}
