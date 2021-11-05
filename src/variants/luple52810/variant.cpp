#include "variant.h"

#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] = {
  // D0 - D7
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,

  // D8 - D13
  8,

  9,
  10,

  11,

  12,
  13,
  14,

  15,
  16,

  // function set pins
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,

  25,
  26,
  27,
  28,
  29,
  30,
  31,
};

void initVariant()
{
  // LED1 & LED2
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);

  pinMode(PIN_LED2, OUTPUT);
  ledOff(PIN_LED2);
}

