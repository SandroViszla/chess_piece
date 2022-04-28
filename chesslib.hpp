// chesslib header file

#ifndef CHESSLIB
#define CHESSLIB

#include "figure.hpp"

// фигура King
class King : virtual public Figure {
public:
  King(char* p) : Figure(p) {}; // конструктор
  char isA() { return 'P'; };   // перегрузка метода
  int attack(char*);            // перегрузка метода
};

// фигура Wizir
class Wizir : virtual public Figure {
public:
  Wizir(char* p) : Figure(p) {}; // конструктор
  char isA() { return 'C'; };   // перегрузка метода
  int attack(char*);            // перегрузка метода
};

// фигура Diamond, наследующая King и Wizir
class Diamond : public King, public Wizir {
public:
  Diamond(char* p) : King(p), Wizir(p), Figure(p) {}; // конструктор
  char isA() { return 'D'; };          // перегрузка метода
  int attack(char*);                   // перегрузка метода
};

#endif
