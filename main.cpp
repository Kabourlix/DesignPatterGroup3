#include "Visitor.h"
#include "CheckoutVisitor.h"
#include "SubscribedCheckoutVisitor.h"
#include "Fruit.h"
#include "Cake.h"


int main(int argc, char** argv){
    //Création de fruit et de gateaux
    Fruit* banane = new Fruit(1.5, 0.1);
    Fruit* pomme = new Fruit(2.5, 0.2);
    Fruit* orange = new Fruit(3.5, 0.3);
    Fruit* cerise = new Fruit(4.5, 0.4);

    Cake* bn = new Cake(5.5, 0.5);
    Cake* prince = new Cake(6.5, 0.6);
    Cake* pepito = new Cake(7.5, 0.7);
    Cake* tiramisu = new Cake(8.5, 0.8);

    //Création des visiteurs
    Visitor* caisseClassique = new CheckoutVisitor();
    Visitor* caisseAbonne = new SubscribedCheckoutVisitor();

    


}