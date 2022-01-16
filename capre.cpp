#include "Capre.hpp"

Capre::Capre() {
    nume = NULL;
    nr_Capre = 0;
    mancare_Capre = NULL;
    cant_mancare_Capre = 0;
}

Capre::Capre(const char* name, int no_sheeps, const char* sheep_food, int ammount_sheep_food) {
    this->nume = new char[strlen(name) + 1];
    strcpy(this->nume, name);
    nr_Capre = no_sheeps;
    this->mancare_Capre = new char[strlen(sheep_food) + 1];
    strcpy(this->mancare_Capre, sheep_food);
    cant_mancare_Capre = ammount_sheep_food;
}

char* Capre::getName() {
    return nume;
}

int Capre::getNumber() {
    return nr_Capre;
}

char* Capre::ceMananca() {
    return mancare_Capre;
}

int Capre::catMananca() {
    return cant_mancare_Capre;
}
int Capre::catManancaPorc() {
    return 0;
}

int Capre::catManancaTotal() {
    return cant_mancare_Capre;
}

void Capre::afisare() {
    std::cout << "Nume: " << nume << std::endl;
    std::cout << "Nr: " << nr_Capre << std::endl;
    std::cout << "Mancare: " << mancare_Capre << std::endl;
    std::cout << "Cantitate mancare: " << cant_mancare_Capre << std::endl;
    
}

Capre::~Capre() {
    delete[] nume;
    delete[] mancare_Capre;

}