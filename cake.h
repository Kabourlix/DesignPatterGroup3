#ifndef CAKE
#define CAKE

#include "article.h"

class Cake : public Article {
public:
	//Définition du constructeur et destructeur par défaut
	Cake();
	~Cake();
	float accept(const Visitor& v);
};

#endif