#ifndef CAKE
#define CAKE

#include "article.h"

class Cake : public Article {

private :
	float price;
	float discount;
public:
	//Définition du constructeur et destructeur par défaut
	Cake(float _price, float _discount);
	~Cake();
	float accept(const Visitor& v);
};

#endif