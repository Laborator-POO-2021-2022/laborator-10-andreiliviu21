#include "Gaini.hpp"

Gaini::Gaini() {
    nume = NULL;
    nr_gaini = 0;
    mancare_gaini = NULL;
    cant_mancare_gaini = 0;
}

Gaini::Gaini(const char* name, int no_chickens, const char* chicken_food, int ammount_chicken_food) {
    this->nume = new char[strlen(name) + 1];
    strcpy(this->nume, name);
    nr_gaini = no_chickens;
    this->mancare_gaini = new char[strlen(chicken_food) + 1];
    strcpy(this->mancare_gaini, chicken_food);
    cant_mancare_gaini = ammount_chicken_food;
}

char* Gaini::getName() {
    return nume;
}

int Gaini::getNumber() {
    return nr_gaini;
}

char* Gaini::ceMananca() {
    return mancare_gaini;
}

int Gaini::catMananca() {
    return cant_mancare_gaini;
}

int Gaini::catManancaTotal() {
    return cant_mancare_gaini;
}

int Gaini::catManancaPorc() {
    return 0;
}

void Gaini::afisare() {
    std::cout << "Nume: " << nume << std::endl;
    std::cout << "Nr: " << nr_gaini << std::endl;
    std::cout << "Mancare: " << mancare_gaini << std::endl;
    std::cout << "Cantitate mancare: " << cant_mancare_gaini << std::endl;
    
}

Gaini::~Gaini() {
    delete[] nume;
    delete[] mancare_gaini;

}