#include "fruit.h"
#include <iostream>

Fruit::Fruit(){
	std::cout << "Appel au constructeur de la classe Fruit - adresse de l'objet : " << this <<std::endl;
}

Fruit::~Fruit(){
	std::cout << "Appel au destructeur de la classe Fruit - adresse de l'objet : " << this <<std::endl;
}


float Fruit::accept(const Visitor& v){
	std::cout << "On appel le visiteur" <<std::endl;
}
