#include "vaci.hpp"

Vaci::Vaci() {
    nume = NULL;
    nr_vaci = 0;
    mancare_vaci = NULL;
    cant_mancare_vaci = 0;
}

Vaci::Vaci(const char* name, int no_cows, const char* cow_food, int ammount_cow_food) {
    this->nume = new char[strlen(name) + 1];
    strcpy(this->nume, name);
    nr_vaci = no_cows;
    this->mancare_vaci = new char[strlen(cow_food) + 1];
    strcpy(this->mancare_vaci, cow_food);
    cant_mancare_vaci = ammount_cow_food;
}

char* Vaci::getName() {
    return nume;
}

int Vaci::getNumber() {
    return nr_vaci;
}

char* Vaci::ceMananca() {
    return mancare_vaci;
}

int Vaci::catMananca() {
    return cant_mancare_vaci;
}

int Vaci::catManancaPorc() {
    return 0;
}

int Vaci::catManancaTotal() {
    return cant_mancare_vaci;
}

void Vaci::afisare() {
    std::cout << "Nume: " << nume << std::endl;
    std::cout << "Nr: " << nr_vaci << std::endl;
    std::cout << "Mancare: " << mancare_vaci << std::endl;
    std::cout << "Cantitate mancare: " << cant_mancare_vaci << std::endl;
    
}

Vaci::~Vaci() {
    delete[] nume;
    delete[] mancare_vaci;

}