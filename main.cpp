#include "Visitor.h"
#include "CheckoutVisitor.h"
#include "SubscribedCheckoutVisitor.h"
#include "fruit.h"
#include "cake.h"

#include <iostream>


int main(int argc, char** argv){
    //Création de fruit et de gateaux
    Fruit* banane = new Fruit(1.59, 0.1);
    Fruit* pomme = new Fruit(1.99, 0.2);
    Fruit* orange = new Fruit(0.70, 0.3);
    Fruit* cerise = new Fruit(13.0, 0.4);

    Cake* bn = new Cake(2.88, 0.5);
    Cake* prince = new Cake(1.13, 0.6);
    Cake* pepito = new Cake(2.22, 0.7);
    Cake* tiramisu = new Cake(1.99, 0.8);

    //Création des visiteurs
    Visitor* caisseClassique = new CheckoutVisitor();
    Visitor* caisseAbonne = new SubscribedCheckoutVisitor();


    std::cout << "On a acheté 2kg pommes, 1kg banane, 1kg orange et 10kg cerises. On a également prix 1 paquet de bn, 2 paquets de prince, 1 paquet de pepito et 3 tiramisu." << std::endl;


    std::cout << "------------ Ticket de caisse classique ------------" << std::endl;
    float prixPomme = 2 * pomme->accept(*caisseClassique);
    float prixBanane = 1 * banane->accept(*caisseClassique);
    float prixOrange = 1 * orange->accept(*caisseClassique);
    float prixCerise = 10 * cerise->accept(*caisseClassique);

    float prixBn = 1 * bn->accept(*caisseClassique);
    float prixPrince = 2 * prince->accept(*caisseClassique);
    float prixPepito = 1 * pepito->accept(*caisseClassique);
    float prixTiramisu = 3 * tiramisu->accept(*caisseClassique);

    
    std::cout << "Pomme 2kg : " << prixPomme << "€" << std::endl;
    std::cout << "Banane 1kg : " << prixBanane << "€" << std::endl;
    std::cout << "Orange 1kg : " << prixOrange << "€" << std::endl;
    std::cout << "Cerise 10kg : " << prixCerise << "€" << std::endl;
    std::cout << "Bn x1 : " << prixBn << "€" << std::endl;
    std::cout << "Prince x2 : " << prixPrince << "€" << std::endl;
    std::cout << "Pepito x1 : " << prixPepito << "€" << std::endl;
    std::cout << "Tiramisu x3 : " << prixTiramisu << "€" << std::endl;
    std::cout << "Total : " << (prixPomme + prixBanane + prixOrange + prixCerise + prixBn + prixPrince + prixPepito + prixTiramisu) << "€" << std::endl;
    std::cout << "------------------------" << std::endl;

    std::cout << "------------ Ticket de caisse abonné ------------" << std::endl;
    float prixPomme2 = 2 * pomme->accept(*caisseAbonne);
    float prixBanane2 = 1 * banane->accept(*caisseAbonne);
    float prixOrange2 = 1 * orange->accept(*caisseAbonne);
    float prixCerise2 = 10 * cerise->accept(*caisseAbonne);

    float prixBn2 = 1 * bn->accept(*caisseAbonne);
    float prixPrince2 = 2 * prince->accept(*caisseAbonne);
    float prixPepito2 = 1 * pepito->accept(*caisseAbonne);
    float prixTiramisu2 = 3 * tiramisu->accept(*caisseAbonne);


    std::cout << "Pomme 2kg : " << prixPomme2 << "€" << std::endl;
    std::cout << "Banane 1kg : " << prixBanane2 << "€" << std::endl;
    std::cout << "Orange 1kg : " << prixOrange2 << "€" << std::endl;
    std::cout << "Cerise 10kg : " << prixCerise2 << "€" << std::endl;
    std::cout << "Bn x1 : " << prixBn2 << "€" << std::endl;
    std::cout << "Prince x2 : " << prixPrince2 << "€" << std::endl;
    std::cout << "Pepito x1 : " << prixPepito2 << "€" << std::endl;
    std::cout << "Tiramisu x3 : " << prixTiramisu2 << "€" << std::endl;
    std::cout << "Total : " << (prixPomme2 + prixBanane2 + prixOrange2 + prixCerise2 + prixBn2 + prixPrince2 + prixPepito2 + prixTiramisu2) << "€" << std::endl;
    std::cout << "------------------------" << std::endl;
}