// chesslib cpp file

#include "chesslib.hpp"

// функция проверки позиции для King
int King::attack(char* p) {
    if(deskout(p) > 0) // control pointed position
        return(0); // square outside the desk
    int x = p[0] - _position[0]; // alpha shift by row
    int y = p[1] - _position[1]; // digit shift by col
    if(x < 0) x = -x; // abs delta by x
    if(y < 0) y = -y; // abs delta by y
    if(((x + y) == 1) || (( x == y) && (x+y == 2))) // this attack to pointed
        return(1); // position
    return(0); // this no attack to *p
} // King::attack

// функция проверки позиции для Wizir
int Wizir::attack(char* p) {
  if (deskout(p) > 0) {
    return 0;
  }
  int x = p[0] - _position[0];
  int y = p[1] - _position[1];
  if (x < 0) {
    x = -x;
  }
  if (y < 0) {
    y = -y;
  }
    if ( ((x+y) > 2) || (x == y-1) || (x-1 == y))
    {
        return (0);
    }
    return (1);
}

// функция проверки позиции для Diamond
int Diamond::attack(char* s) {
    if (King::attack(s) > 0)
        return 2;
    if (Wizir::attack(s) > 0)
        return 1;
    return 0;
}
