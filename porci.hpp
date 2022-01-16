#ifndef PORCI_HPP
#define PORCI_HPP
#include "ferma.hpp"

class Porci: public Ferma {

private:
    char *nume;
    int nr_Porci;
    char *mancare_Porci1;
    char *mancare_Porci2;
    int cant_mancare_Porci1;
    int cant_mancare_Porci2;

public:
    Porci();
    Porci(const char*, int, const char*, const char*, int, int);
    char *getName();
    int getNumber();
    char *ceMananca();
    int catMananca();
    int catManancaPorc();
    int catManancaTotal();
    void afisare();
    ~Porci();
    
};


#endif