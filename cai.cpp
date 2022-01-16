#include "Cai.hpp"

Cai::Cai() {
    nume = NULL;
    nr_Cai = 0;
    mancare_Cai = NULL;
    cant_mancare_Cai = 0;
}

Cai::Cai(const char* name, int no_horses, const char* horse_food, int ammount_horse_food) {
    this->nume = new char[strlen(name) + 1];
    strcpy(this->nume, name);
    nr_Cai = no_horses;
    this->mancare_Cai = new char[strlen(horse_food) + 1];
    strcpy(this->mancare_Cai, horse_food);
    cant_mancare_Cai = ammount_horse_food;
}

char* Cai::getName() {
    return nume;
}

int Cai::getNumber() {
    return nr_Cai;
}

char* Cai::ceMananca() {
    return mancare_Cai;
}

int Cai::catMananca() {
    return cant_mancare_Cai;
}

int Cai::catManancaPorc() {
    return 0;
}

int Cai::catManancaTotal() {
    return cant_mancare_Cai;
}

void Cai::afisare() {
    std::cout << "Nume: " << nume << std::endl;
    std::cout << "Nr: " << nr_Cai << std::endl;
    std::cout << "Mancare: " << mancare_Cai << std::endl;
    std::cout << "Cantitate mancare: " << cant_mancare_Cai << std::endl;
    
}

Cai::~Cai() {
    delete[] nume;
    delete[] mancare_Cai;

}