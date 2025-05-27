#include <iostream>

using namespace::std;

int main(){
    float x(-10.0);
    cout << "Entrez un nombre réel entre -1 et 1 : ";
    cin >> x;
    
    if(x >= -1 && x < 1 ){
        cout << "x appatient à I" << endl;
    }
    else{
        cout << "x n'appatient pas à I" << endl;
    }
    return 0;
}
