#include <iostream>
#include "BankAccount.hpp"

using namespace std;

int main() {
    BankAccount compte("A123", 1000);

    cout << "Etat initial :" << endl;
    compte.afficher();

    cout << "\nDepot de 500 euros :" << endl;
    compte.deposer(500);

    cout << "\nRetrait de 200 euros :" << endl;
    compte.retirer(200);

    cout << "\nEtat final :" << endl;
    compte.afficher();

    return 0;
}
