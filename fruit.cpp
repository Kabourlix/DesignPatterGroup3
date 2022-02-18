#include "fruit.h"
#include "Visitor.h"
#include <iostream>

Fruit::Fruit(float _pricePerKg, float _discount){
	pricePerKg = _pricePerKg;
	discount = _discount;
	std::cout << "Appel au constructeur de la classe Fruit - adresse de l'objet : " << this <<std::endl;
}

Fruit::~Fruit(){
	std::cout << "Appel au destructeur de la classe Fruit - adresse de l'objet : " << this <<std::endl;
}


float Fruit::accept(const Visitor& v){
	std::cout << "On appelle le visiteur" <<std::endl;
	return v.weightVisit(this);
}

inline float Fruit::getPricePerKg() const {
	return pricePerKg;
}

inline float Fruit::getDiscount() const {
	return discount;
}