#ifndef GAINI_HPP
#define GAINI_HPP
#include "ferma.hpp"

class Gaini: public Ferma {

private:
    char *nume;
    int nr_gaini;
    char *mancare_gaini;
    int cant_mancare_gaini;

public:
    Gaini();
    Gaini(const char*, int, const char*, int);
    char *getName();
    int getNumber();
    char *ceMananca();
    int catMananca();
    int catManancaTotal();
    void afisare();
    int catManancaPorc();
    ~Gaini();
    
};


#endif