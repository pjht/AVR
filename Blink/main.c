#include <avr/io.h>
#include <util/delay.h>
#include "iostuff.h"
int main() {
  DDRB=B5;  // Set pin 13 as an output
  for(;;) {
    PORTB|=B5;       // Make pin 13 HIGH
    _delay_ms(500);      // Wait half a second
    PORTB&=~B5;      // Make pin 13 LOW
    _delay_ms(500);      // Wait half a second
  }
  return 0;
}
