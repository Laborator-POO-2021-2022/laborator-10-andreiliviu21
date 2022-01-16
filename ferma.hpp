#ifndef FERMA_HPP
#define FERMA_HPP
#pragma warning(disable:4996) 
#include <cstring>
#include <iostream>
class Ferma {

public:
    virtual ~Ferma();
    virtual void afisare() = 0;
    virtual char *getName() = 0;
    virtual char* ceMananca() = 0;
    virtual int catManancaTotal() = 0;
    virtual int catMananca() = 0;
    virtual int catManancaPorc() = 0;

    // void char*
};

#endif