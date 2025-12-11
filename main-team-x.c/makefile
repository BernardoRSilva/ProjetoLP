compilador = cc

.PHONY: all clean run

all: programa

# Programa final
programa: main.o funcaolog.o ordenarsimetricos.o MdoisDcinco.o somametades.o matriz4por18.o mediana.o ajuda.o novomistura.o decomposicaoprimos.o
	$(compilador) -o programa main.o funcaolog.o ordenarsimetricos.o MdoisDcinco.o somametades.o matriz4por18.o mediana.o ajuda.o novomistura.o decomposicaoprimos.o -lm
	@echo "Programa compilado com sucesso!"



main.o: main.c funcoes.h
	$(compilador) -c main.c

funcaolog.o: funcaolog.c funcoes.h
	$(compilador) -c funcaolog.c

ordenarsimetricos.o: ordenarsimetricos.c funcoes.h
	$(compilador) -c ordenarsimetricos.c

MdoisDcinco.o: MdoisDcinco.c funcoes.h
	$(compilador) -c MdoisDcinco.c

somametades.o: somametades.c funcoes.h
	$(compilador) -c somametades.c

matriz4por18.o: matriz4por18.c funcoes.h
	$(compilador) -c matriz4por18.c

mediana.o: mediana.c funcoes.h
	$(compilador) -c mediana.c

ajuda.o: ajuda.c funcoes.h
	$(compilador) -c ajuda.c

novomistura.o: novomistura.c funcoes.h
	$(compilador) -c novomistura.c

decomposicaoprimos.o: decomposicaoprimos.c funcoes.h
	$(compilador) -c decomposicaoprimos.c

clean:
	rm -f *.o programa

run: programa
	./programa

