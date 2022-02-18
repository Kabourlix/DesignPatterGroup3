#ifndef _FRUIT
#define _FRUIT

#include "article.h"

class Fruit : public Article {

private :
	float pricePerKg;
	float discount;

public:
	//Définition du constructeur et destructeur par défaut
	Fruit(float _priceperKG, float _discount);
	~Fruit();
	float accept(const Visitor& v);

	inline float getPricePerKg() const;

	inline float getDiscount() const; 
};

#endif