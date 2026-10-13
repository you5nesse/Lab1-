#include "BankAccount.hpp"
#include <iostream>

using namespace std;

BankAccount::BankAccount()
    : m_numero("N/A"), m_solde(0.0) {
}

BankAccount::BankAccount(const string& numero,
                         double soldeInitial)
    : m_numero(numero),
      m_solde(soldeInitial >= 0 ? soldeInitial : 0.0) {
}

void BankAccount::deposer(double montant) {
    if (montant <= 0) {
        cerr << "Montant invalide !" << endl;
        return;
    }

    m_solde += montant;

    cout << "Depot effectue. Nouveau solde : "
         << m_solde << " euros" << endl;
}

bool BankAccount::retirer(double montant) {
    if (montant <= 0 || montant > m_solde) {
        cerr << "Retrait impossible !" << endl;
        return false;
    }

    m_solde -= montant;

    cout << "Retrait effectue. Nouveau solde : "
         << m_solde << " euros" << endl;

    return true;
}

void BankAccount::afficher() const {
    cout << "Numero : " << m_numero
         << " | Solde : " << m_solde
         << " euros" << endl;
}

string BankAccount::getNumero() const {
    return m_numero;
}

double BankAccount::getSolde() const {
    return m_solde;
}
