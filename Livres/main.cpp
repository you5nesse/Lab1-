#include <iostream>
#include "Library.hpp"

using namespace std;

int main() {
    Library biblio;

    biblio.ajouterLivre(Book("Le Petit Prince", "Antoine de Saint-Exupery", "978-2070612758", 1943));
    biblio.ajouterLivre(Book("L'Etranger", "Albert Camus", "978-2070360024", 1942));
    biblio.ajouterLivre(Book("Les Miserables", "Victor Hugo", "978-2253096344", 1862));

    cout << "=== Liste des livres ===" << endl;
    biblio.listerLivres();

    cout << "\n=== Recherche ISBN 978-2070360024 ===" << endl;
    const Book* trouve = biblio.trouverParISBN("978-2070360024");
    if (trouve != nullptr) {
        trouve->afficher();
    } else {
        cout << "Livre introuvable." << endl;
    }

    cout << "\n=== Recherche ISBN 000-0000000000 ===" << endl;
    trouve = biblio.trouverParISBN("000-0000000000");
    if (trouve != nullptr) {
        trouve->afficher();
    } else {
        cout << "Livre introuvable." << endl;
    }

    return 0;
}
