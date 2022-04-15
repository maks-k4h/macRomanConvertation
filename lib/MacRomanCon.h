#ifndef _MACROMANCON_H_
#define _MACROMANCON_H_

#include <cstdlib>

// convert macOS Roman to UTF-8
// return size of converted data
size_t macRomanToUTF8(const uint8_t *in, size_t n, uint8_t *out);

#endif //_MACROMANCON_H_
