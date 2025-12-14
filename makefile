#!/bin/bash

compilador = cc

.PHONY: all clean run

all: programa

programa: main-team-x.o functions-team-x.o
	$(compilador) -o programa main-team-x.o functions-team-x.o -lm
	@echo "Programa compilado com sucesso!"

main-team-x.o: main-team-x.c functions-team-x.h
	$(compilador) -c main-team-x.c

functions-team-x.o: functions-team-x.c functions-team-x.h
	$(compilador) -c functions-team-x.c

run: programa
	./programa

clean:
	rm -f *.o programa a.out
