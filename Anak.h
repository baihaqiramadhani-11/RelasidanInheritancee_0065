#ifndef ANAK_H
#define ANAK_H

#include <iostream>
#include <string>

using namespace std;

// membuat class anak di file header anak.h
class anak
{
public:
    // deklarasi member variabel pada class anak
    string nama;

    // constructor
    anak(string pNama) : nama(pNama)
    {
        cout << "Anak \"" << nama << "\" ada\n";
    }

    // destructor
    ~anak()
    {
        cout << "Anak \"" << nama << "\" tidak ada\n";
    }
};

#endif