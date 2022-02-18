main : CheckoutVisitor.o SubscribedCheckoutVisitor.o fruit.o cake.o
	g++ -o main CheckoutVisitor.o SubscribedCheckoutVisitor.o fruit.o cake.o

main.o : main.cpp 
	g++ -c main.cpp

CheckoutVisitor.o : CheckoutVisitor.cpp CheckoutVisitor.h Visitor.h
	g++ -c CheckoutVisitor.cpp

SubscribedCheckoutVisitor.o : SubscribedCheckoutVisitor.cpp SubscribedCheckoutVisitor.h Visitor.h
	g++ -c SubscribedCheckoutVisitor.cpp

fruit.o : fruit.cpp fruit.h article.h
	g++ -c fruit.cpp

cake.o : cake.cpp cake.h article.h
	g++ -c cake.cpp

clean:
	rm -f main main.o CheckoutVisitor.o SubscribedCheckoutVisitor.o fruit.o cake.o