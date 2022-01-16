#include "Porci.hpp"

Porci::Porci() {
    nume = NULL;
    nr_Porci = 0;
    mancare_Porci1 = NULL;
    cant_mancare_Porci1 = 0;
    mancare_Porci2 = NULL;
    cant_mancare_Porci2 = 0;
}

Porci::Porci(const char* name, int no_pigs, const char* pig_food1, const char* pig_food2, int ammount_pig_food1, int ammount_pig_food2) {
    this->nume = new char[strlen(name) + 1];
    strcpy(this->nume, name);
    nr_Porci = no_pigs;
    this->mancare_Porci1 = new char[strlen(pig_food1) + 1];
    strcpy(this->mancare_Porci1, pig_food1);
    this->mancare_Porci2 = new char[strlen(pig_food2) + 1];
    strcpy(this->mancare_Porci2, pig_food2);
    cant_mancare_Porci1 = ammount_pig_food1;
    cant_mancare_Porci2 = ammount_pig_food2;
}

char* Porci::getName() {
    return nume;
}

int Porci::getNumber() {
    return nr_Porci;
}

char* Porci::ceMananca() {
    return mancare_Porci1;
}
// char* Porci::ceManancaPorc() {
//     return mancare_Porci2;
// }

int Porci::catMananca() {
    return cant_mancare_Porci1;
}



int Porci::catManancaPorc() {
    return cant_mancare_Porci2;
}

int Porci::catManancaTotal() {
    return cant_mancare_Porci1 + cant_mancare_Porci2;
    
}

void Porci::afisare() {
    std::cout << "Nume: " << nume << std::endl;
    std::cout << "Nr: " << nr_Porci << std::endl;
    std::cout << "Mancare: " << mancare_Porci1 << std::endl;
    std::cout << "Cantitate mancare: " << cant_mancare_Porci1 << std::endl;
    std::cout << "Mancare: " << mancare_Porci2 << std::endl;
    std::cout << "Cantitate mancare: " << cant_mancare_Porci2 << std::endl;
    
}

Porci::~Porci() {
    delete[] nume;
    delete[] mancare_Porci1;
    delete[] mancare_Porci2;


}