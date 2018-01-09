#include <avr/io.h>
#include <util/delay.h>
#include "iostuff.h"

int main() {
  DDRD=~B4;
  DDRB=B5;
  for(;;) {
    if (biton(PIND,B4)) {
      PORTB&=~B5;
    } else {
      PORTB|=B5;
    }
  }
  return 0;
}
