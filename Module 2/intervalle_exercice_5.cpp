#include <iostream>
#include <windows.h>

using namespace::std;
 // contrôler que le float entré appartient à l'intervelle I = [2,3[ U ]0,1] U [-10,-2]
 // et en utilisant uniquement les opérateurs relationnels < et == Tous les opérateurs logiques sont autorisés.
int main(){
    SetConsoleOutputCP(CP_UTF8);  // Définit l'encodage de sortie à UTF-8
    SetConsoleCP(CP_UTF8);
    //cout << "éèàç — caractères spéciaux en UTF-8" << endl;
    float x(-10.0);
    cout << "Entrez un nombre réel : ";
    cin >> x;
   if(!(x < 2) && x < 3){
        cout << "x appartient à I" << endl;
        //cout << "Cas 1" << endl;
   }
   else{
          if(  !(x < 0 || x == 0) && (x < 1 || x == 1)){
               cout << "x appartient à I" << endl;
               //cout << "Cas 2" << endl;
          }
          else{
               if((x == -10 || !(x < -10)) && (x < -2 || x == -2)){
                   cout << "x appartient à I" << endl;
                   //cout << "Cas 3" << endl;  
               }
               else{
                    cout << "x n'appartient pas à I" << endl; 
                    //cout << "Cas 3 + else" << endl; 
               }

          }
     }
    return 0;
}