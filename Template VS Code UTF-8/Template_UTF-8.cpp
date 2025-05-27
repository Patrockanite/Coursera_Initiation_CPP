#include <iostream>
#include <windows.h> // Pour SetConsoleOutputCP

using namespace std;

int main() {
    // Forcer l'encodage UTF-8 dans la console (Windows uniquement)
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8); // Facultatif, utile si tu fais du cin avec des caractères accentués

    cout << "Bienvenue dans votre programme C++ avec UTF-8 activé !" << endl;
    cout << "Caractères accentués : é è à ù ç Ê Ë ï Ô œ\n" << endl;

    // Ton code ici...

    return 0;
}
