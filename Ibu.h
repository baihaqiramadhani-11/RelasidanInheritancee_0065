#ifndef IBU_H
#define IBU_H

#include <iostream>
#include <vector>
#include <string>
#include "anak.h"
class Ibu
{
public:
    // deklarasi member variabel
    std::string nama;
    std::vector<anak *> daftar_anak;
    // constructor
    Ibu(std::string pNama) : nama(pNama)
    {
        std::cout << "Ibu \"" << nama << "\" ada\n";
    }
    // destructor
    ~Ibu()
    {
        std::cout << "Ibu \"" << nama << "\" tidak ada\n";
    }

    // deklarasi method
    void tambahAnak(anak *pAnak);
    void cetakAnak();
};

// definisi method
void Ibu::tambahAnak(anak *pAnak)
{
    daftar_anak.push_back(pAnak);
}
void Ibu::cetakAnak()
{
    std::cout << "Daftar Anak dari Ibu \"" << this->nama << "\":\n";

    for (auto &a : daftar_anak)
    {
        std::cout << a->nama << "\n";
    }

    std::cout << std::endl;
}

#endif