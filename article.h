#include "Visitor.h"

#ifndef ARTICLE
#define ARTICLE

class Article {
public:
	virtual ~Article() {};
	//Méthode virtuelle pure de la classe abstraite Article
	virtual float accept(const Visitor& v) =0;
};

#endif