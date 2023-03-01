#include "password.h"
#include <iostream>

using namespace std;

// Default constructor
Password::Password() {
    plaintext = "";
    rank = 0;
    hash = "";
}

// Parameterized constructor
Password::Password(string plaintext, int rank, string hash) {
    this->plaintext = plaintext;
    this->rank = rank;
    this->hash = hash;
}

// Copy constructor
Password::Password(const Password &p) {
    plaintext = p.plaintext;
    rank = p.rank;
    hash = p.hash;
}

// Destructor
Password::~Password() {
    // Nothing to do here since all member variables are primitives
}

// Print method
void Password::print() const {
    cout << "Password: " << plaintext << endl;
    cout << "Rank: " << rank << endl;
    cout << "Hash: " << hash << endl;
}
