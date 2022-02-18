#include "cake.h"
#include <iostream>

Cake::Cake(){
	std::cout << "Appel au constructeur de la classe Cake - adresse de l'objet : " << this <<std::endl;
}

Cake::~Cake(){
	std::cout << "Appel au destructeur de la classe Cake - adresse de l'objet : " << this <<std::endl;
}


float Cake::accept(const Visitor& v){
	std::cout << "On appel le visiteur" <<std::endl;
}
