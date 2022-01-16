#include "vaci.hpp"
#include "gaini.hpp"
#include "cai.hpp"
#include "porci.hpp"
#include "capre.hpp"
#include "ferma.hpp"

int main() 
{
	Ferma **vector;
	vector = new Ferma*[5];
	
	vector[0] = new Vaci ("Vaci", 10, "Nutret", 30);
	vector[1] = new Gaini("Gaini", 100, "Graunte", 5);
	vector[2] = new Cai("Cai", 2, "Nutret", 8);
	vector[3] = new Porci("Porci", 8, "Graunte", "Iarba", 4, 5);
	vector[4] = new Capre("Capre", 4, "Nutret" , 4);

	std::cout << "=======================================" << std::endl;
	std::cout << "Animalele din hambar:\n" << std::endl;
	
    for(int i = 0 ; i < 5 ; i ++) {
	    vector[i]->afisare();
        std::cout << "-------------" << std::endl;
    }
	std::cout << "=======================================" << std::endl;

	// cat mananca animalele zilnic 
	int cat_mananca_zilnic = 0;
	for (int i = 0; i < 5; i++) {
		cat_mananca_zilnic = cat_mananca_zilnic + vector[i]->catManancaTotal();
	}
	std::cout << "Animalele consuma zilnic " << cat_mananca_zilnic << "kg de hrana." << std::endl;

	//depozitul are o capacitate de 2000kg.
	//aflam cate zile poate aproviziona depozitul ferma cu mancare
	float no_of_days = 0;
	no_of_days = (float)2000/cat_mananca_zilnic;
	std::cout << "Depozitul poate aproviziona ferma cu mancare " << no_of_days << " de zile." << std::endl;
	std::cout << "=======================================" << std::endl;

	//cat se consuma din fiecare tip de mancare in fiecare zi 
	float cat_nutret = 0;
	float cat_graunte = 0;
	float cat_iarba = 0;

	for (int i = 0; i < 5; i++) {
		if(strcmp(vector[i]->ceMananca(), "Nutret") == 0) {
			cat_nutret = cat_nutret + vector[i]->catMananca();
		} else if(strcmp(vector[i]->ceMananca(), "Graunte") == 0) {
			cat_graunte = cat_graunte + vector[i]->catMananca();
		}
	}
	cat_iarba = cat_mananca_zilnic - cat_nutret - cat_graunte;
	
	//cantitate de hrana din fiecare tip pentru "no_of_days" zile
	std::cout << "Hrana din fiecare tip pentru " << no_of_days << " zile:" << std::endl;
	std::cout << "Cantitate Nutret: " << (float)cat_nutret * no_of_days << " kg." << std::endl;
	std::cout << "Cantitate Graunte: " << (float)cat_graunte * no_of_days  << " kg." << std::endl;
	std::cout << "Cantitate Iarba " << (float)cat_iarba * no_of_days  << " kg." << std::endl;
	std::cout << "=======================================" << std::endl;

	//calculam de cate ori trebuie sa fie reumplut depozitul
	float cate_reumpleri = 0;
	cate_reumpleri = 365 / no_of_days;
	if (cate_reumpleri > (int)cate_reumpleri) {
		std::cout << "Depozitul in cursul unui an (365 zile) trebuie umplut de aproximativ " << (int)cate_reumpleri+1 << " ori" << std::endl;
	}
	std::cout << "=======================================" << std::endl;

	//cate mancare ramane la finalul anului
	float total_ramas = 0;
	float aux = -(cate_reumpleri - (int)cate_reumpleri-1);
	total_ramas =  aux * 2000;
	std::cout << "Dupa un an, in depozit mai raman " << total_ramas << " kg." << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Hrana din fiecare tip ramasa la final de an:"<< std::endl;
	std::cout << "Cantitate Nutret: " << (float)cat_nutret/cat_mananca_zilnic * total_ramas << " kg." << std::endl;
	std::cout << "Cantitate Graunte: " << (float)cat_graunte/cat_mananca_zilnic  * total_ramas  << " kg." << std::endl;
	std::cout << "Cantitate Iarba " << (float)cat_iarba/cat_mananca_zilnic  * total_ramas  << " kg." << std::endl;
	std::cout << "=======================================" << std::endl;

	Ferma *temp;

	//cat se consuma zilnic 
	std::cout << "Animalele mananca zilnic " << cat_mananca_zilnic << " kg: " << std::endl;
	std::cout << "	Nutret: " << (float)cat_nutret << " kg" << std::endl;
	std::cout << "	Graunte: " << (float)cat_graunte  << " kg" << std::endl;
	std::cout << "	Iarba " << (float)cat_iarba << " kg" << std::endl;
	std::cout << "=======================================" << std::endl;

	//top 3 consumatori
	for (int i = 0; i < 5; i++) {
		for(int j = i+1; j < 4; j++) {
			if(vector[i]->catManancaTotal() < vector[j]->catManancaTotal()) {
				temp = vector[i];
				vector[i] = vector[j];
				vector[j] = temp;
			}
		}
	}
	std::cout << "Top 3 consumatori: " << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << vector[i]->getName() << std::endl;
	}
	return 0;
}