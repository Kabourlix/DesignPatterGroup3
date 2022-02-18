#ifndef FRUIT
#define FRUIT

#include "article.h"

class Fruit : public Article {

private :
	float priceperKG;
	float discount;

public:
	//Définition du constructeur et destructeur par défaut
	Fruit(float _priceperKG, float _discount);
	~Fruit();
	float accept(const Visitor& v);
};

#endif