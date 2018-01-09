#include <avr/io.h>
#include "iostuff.h"

int main() {
  DDRB=B4|B5;  // Set pins 12 and 13 as outputs
  DDRD=~B2; // Set pin 2 as an input
  for(;;) {
    if (biton(PIND,B2)) { // If pin 2 is high
      PORTB=B5;         // Make pin 13 HIGH
    } else {                  // Otherwise (if low)
      PORTB=B4;         // Make pin 12 HIGH
    }
  }
  return 0;
}
