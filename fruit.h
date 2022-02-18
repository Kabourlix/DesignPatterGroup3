#ifndef FRUIT
#define FRUIT

#include "article.h"

class Fruit : public Article {
public:
	//Définition du constructeur et destructeur par défaut
	Fruit();
	~Fruit();
	float accept(const Visitor& v);
};

#endif