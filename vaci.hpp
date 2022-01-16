#ifndef VACI_HPP
#define VACI_HPP
#include "ferma.hpp"

class Vaci: public Ferma {

private:
    char *nume;
    int nr_vaci;
    char *mancare_vaci;
    int cant_mancare_vaci;

public:
    Vaci();
    Vaci(const char*, int, const char*, int);
    char *getName();
    int getNumber();
    char *ceMananca();
    int catMananca();
    int catManancaTotal();
    void afisare();
    int catManancaPorc();

    ~Vaci();
    
};


#endif