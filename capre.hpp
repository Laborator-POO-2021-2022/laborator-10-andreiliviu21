#ifndef Capre_HPP
#define Capre_HPP
#include "ferma.hpp"

class Capre: public Ferma {

private:
    char *nume;
    int nr_Capre;
    char *mancare_Capre;
    int cant_mancare_Capre;

public:
    Capre();
    Capre(const char*, int, const char*, int);
    char *getName();
    int getNumber();
    char *ceMananca();
    int catMananca();
    int catManancaTotal();
    void afisare();
    int catManancaPorc();
    ~Capre();
    
};


#endif