
#ifndef PASSWORD_H
#define PASSWORD_H

#include <iostream>
using namespace std;

class Password {
    private:
    string plaintext;
    int rank;
    string hash;

public:
    // Default and Parameterized Constructors
    Password();
    Password(string plaintext, int rank, string hash);

    // Copy constructor
    Password(const Password &p);

    // Destructor
    ~Password();

    // Print
    void print() const;
};
#endif PASSWORD_H
