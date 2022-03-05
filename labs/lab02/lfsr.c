#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
  /* YOUR CODE HERE */
  uint16_t ans = *reg;
  int sign = (ans & 1) ^ ((ans >> 2) & 1) ^ ((ans >> 3) & 1) ^ ((ans >> 5) & 1);
  ans >>= 1;
  ans |= (sign << 15);
  *reg = ans;
}
