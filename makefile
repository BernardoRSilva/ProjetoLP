compilador = cc


.PHONY: clean

all:programa.exe

#Compila o programa total
programa.exe: main.o  funcaolog.o ordenarsimetricos.o MdoisDcinco.o somametades.o
	$(compilador) -o programa.exe main.o  funcaolog.o ordenarsimetricos.o MdoisDcinco.o somametades.o
	@echo "Programa compilado"


#
#contruçãomatriz ?


# compila o codigo que calcula o logaritmo de base natural dos elementos do vetor 
funcaolog.o: funcaolog.c
	$(compilador) -c funcaolog.c

#
# Calculo mediana ?


# compila o codigo que ordena por ordem crecsente os simetricos dos valores do vetor
ordenarsimetricos.o: ordenarsimetricos.c
	$(compilador) -c ordenarsimetricos.c


# compila o codigo que devolve os valores maiores que dois e divisiveis por cinco
MdoisDcinco.o: MdoisDcinco.c
	$(compilador) -c MdoisDcinco.c


# compila o codigo que soma as duas metades do vetor
somametades.o: somametades.c
	$(compilador) -c somametades.c


# limpa todos os ficheiros auxiliares
clear:
	rm *.o
	@echo "Ficheros totalmente limpos"


# mostra todos os ficheiros .c existentes
SOURCEFILES = $(wildcard *.c)


# gerar documentação usando o doxygen
doc:
	doxyxen Doxyfile
# Limpar a documentação do doxygen
clean:
	rm -rf docs/*
