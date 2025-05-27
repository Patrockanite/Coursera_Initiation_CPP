#include <iostream>

using namespace::std;

int main(){
    float x(-10.0);
    cout << "Entrez un nombre réel entre -1 et 1 : ";
    cin >> x;
    // contrôler que le float entré appartient à l'intervelle I = [-1,1[
    if(x >= -1 && x < 1 ){
        cout << "x appatient à I" << endl;
    }
    else{
        cout << "x n'appatient pas à I" << endl;
    }
    return 0;
}
