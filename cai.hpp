#ifndef CAI_HPP
#define CAI_HPP
#include "ferma.hpp"

class Cai: public Ferma {

private:
    char *nume;
    int nr_Cai;
    char *mancare_Cai;
    int cant_mancare_Cai;

public:
    Cai();
    Cai(const char*, int, const char*, int);
    char *getName();
    int getNumber();
    char *ceMananca();
    int catMananca();
    int catManancaTotal();
    void afisare();
    int catManancaPorc();

    ~Cai();
    
};


#endif