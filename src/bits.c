#include "bits.h"
#include "cache.h"

int get_set(Cache *cache, address_type address) {
  unsigned int index;
  index = (address >> 2) & 0x3FF;

  return 0;
}

int get_line(Cache *cache, address_type address) {
  unsigned int tag;
  tag = (address >> 12) & 0xFFFFF; 
  return 0;
}

int get_byte(Cache *cache, address_type address) {
  unsigned int offset;
  offset = (address >> 0) & 0x3;
  return 0;
}
