#include "MacRomanCon.h"

size_t macRomanToUTF8(const uint8_t *in, size_t n, uint8_t *out) {
    size_t inI, outI {0};
    for (inI = 0; inI < n; ++inI) {
        if (in[inI] <= 0x7f) {
            out[outI++] = in[inI];
        } else if (in[inI] <= 0xbf) {
            if (in[inI] <= 0x9f) {
                if (in[inI] <= 0x8f) {
                    if (in[inI] == 0x80) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x84;
                    } else if (in[inI] == 0x81) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x85;
                    } else if (in[inI] == 0x82) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x87;
                    } else if (in[inI] == 0x83) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x89;
                    } else if (in[inI] == 0x84) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x91;
                    } else if (in[inI] == 0x85) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x96;
                    } else if (in[inI] == 0x86) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x9c;
                    } else if (in[inI] == 0x87) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xa1;
                    } else if (in[inI] == 0x88) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xa0;
                    } else if (in[inI] == 0x89) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xa2;
                    } else if (in[inI] == 0x8a) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xa4;
                    } else if (in[inI] == 0x8b) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xa3;
                    } else if (in[inI] == 0x8c) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xa5;
                    } else if (in[inI] == 0x8d) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xa7;
                    } else if (in[inI] == 0x8e) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xa9;
                    } else if (in[inI] == 0x8f) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xa8;
                    }
                } else {
                    if (in[inI] == 0x90) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xaa;
                    } else if (in[inI] == 0x91) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xab;
                    } else if (in[inI] == 0x92) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xad;
                    } else if (in[inI] == 0x93) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xac;
                    } else if (in[inI] == 0x94) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xae;
                    } else if (in[inI] == 0x95) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xaf;
                    } else if (in[inI] == 0x96) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xb1;
                    } else if (in[inI] == 0x97) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xb3;
                    } else if (in[inI] == 0x98) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xb2;
                    } else if (in[inI] == 0x99) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xb4;
                    } else if (in[inI] == 0x9a) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xb6;
                    } else if (in[inI] == 0x9b) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xb5;
                    } else if (in[inI] == 0x9c) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xba;
                    } else if (in[inI] == 0x9d) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xb9;
                    } else if (in[inI] == 0x9e) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xbb;
                    } else if (in[inI] == 0x9f) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xbc;
                    }
                }
            } else {
                if (in[inI] <= 0xaf) {
                    if (in[inI] == 0xa0) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0xa0;
                    } else if (in[inI] == 0xa1) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xb0;
                    } else if (in[inI] == 0xa2) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xa2;
                    } else if (in[inI] == 0xa3) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xa3;
                    } else if (in[inI] == 0xa4) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xa7;
                    } else if (in[inI] == 0xa5) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0xa2;
                    } else if (in[inI] == 0xa6) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xb6;
                    } else if (in[inI] == 0xa7) {
                        out[outI++] = 0xce;
                        out[outI++] = 0xb2;
                    } else if (in[inI] == 0xa8) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xae;
                    } else if (in[inI] == 0xa9) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xa9;
                    } else if (in[inI] == 0xaa) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x84;
                        out[outI++] = 0xa2;
                    } else if (in[inI] == 0xab) {
                        out[outI++] = 0xcc;
                        out[outI++] = 0x81;
                    } else if (in[inI] == 0xac) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xa8;
                    } else if (in[inI] == 0xad) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x89;
                        out[outI++] = 0xa0;
                    } else if (in[inI] == 0xae) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x86;
                    } else if (in[inI] == 0xaf) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x98;
                    }
                } else {
                    if (in[inI] == 0xb0) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x88;
                        out[outI++] = 0x9e;
                    } else if (in[inI] == 0xb1) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xb1;
                    } else if (in[inI] == 0xb2) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x89;
                        out[outI++] = 0xa4;
                    } else if (in[inI] == 0xb3) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x89;
                        out[outI++] = 0xa5;
                    } else if (in[inI] == 0xb4) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xa5;
                    } else if (in[inI] == 0xb5) {
                        out[outI++] = 0xce;
                        out[outI++] = 0xbc;
                    } else if (in[inI] == 0xb6) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x88;
                        out[outI++] = 0x82;
                    } else if (in[inI] == 0xb7) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x88;
                        out[outI++] = 0x91;
                    } else if (in[inI] == 0xb8) {
                        out[outI++] = 0xce;
                        out[outI++] = 0xa0;
                    } else if (in[inI] == 0xb9) {
                        out[outI++] = 0xcf;
                        out[outI++] = 0x80;
                    } else if (in[inI] == 0xba) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x88;
                        out[outI++] = 0xab;
                    } else if (in[inI] == 0xbb) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xaa;
                    } else if (in[inI] == 0xbc) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xba;
                    } else if (in[inI] == 0xbd) {
                        out[outI++] = 0xce;
                        out[outI++] = 0xa9;
                    } else if (in[inI] == 0xbe) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xa6;
                    } else if (in[inI] == 0xbf) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xb8;
                    }
                }
            }
        } else {
            if (in[inI] <= 0xdf) {
                if (in[inI] <= 0xcf) {
                    if (in[inI] == 0xc0) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xbf;
                    } else if (in[inI] == 0xc1) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xa1;
                    } else if (in[inI] == 0xc2) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xac;
                    } else if (in[inI] == 0xc3) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x88;
                        out[outI++] = 0x9a;
                    } else if (in[inI] == 0xc4) {
                        out[outI++] = 0xc6;
                        out[outI++] = 0x92;
                    } else if (in[inI] == 0xc5) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x89;
                        out[outI++] = 0x88;
                    } else if (in[inI] == 0xc6) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x88;
                        out[outI++] = 0x86;
                    } else if (in[inI] == 0xc7) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xab;
                    } else if (in[inI] == 0xc8) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xbb;
                    } else if (in[inI] == 0xc9) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0xa6;
                    } else if (in[inI] == 0xca) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xa0;
                    } else if (in[inI] == 0xcb) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x80;
                    } else if (in[inI] == 0xcc) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x83;
                    } else if (in[inI] == 0xcd) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x95;
                    } else if (in[inI] == 0xce) {
                        out[outI++] = 0xc5;
                        out[outI++] = 0x92;
                    } else if (in[inI] == 0xcf) {
                        out[outI++] = 0xc5;
                        out[outI++] = 0x93;
                    }
                } else {
                    if (in[inI] == 0xd0) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0x93;
                    } else if (in[inI] == 0xd1) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0x94;
                    } else if (in[inI] == 0xd2) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0x9c;
                    } else if (in[inI] == 0xd3) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0x9d;
                    } else if (in[inI] == 0xd4) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0x98;
                    } else if (in[inI] == 0xd5) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0x99;
                    } else if (in[inI] == 0xd6) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xb7;
                    } else if (in[inI] == 0xd7) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x97;
                        out[outI++] = 0x8a;
                    } else if (in[inI] == 0xd8) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0xbf;
                    } else if (in[inI] == 0xd9) {
                        out[outI++] = 0xc5;
                        out[outI++] = 0xb8;
                    } else if (in[inI] == 0xda) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x81;
                        out[outI++] = 0x84;
                    } else if (in[inI] == 0xdb) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x82;
                        out[outI++] = 0xac;
                    } else if (in[inI] == 0xdc) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0xb9;
                    } else if (in[inI] == 0xdd) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0xba;
                    } else if (in[inI] == 0xde) {
                        out[outI++] = 0xef;
                        out[outI++] = 0xac;
                        out[outI++] = 0x81;
                    } else if (in[inI] == 0xdf) {
                        out[outI++] = 0xef;
                        out[outI++] = 0xac;
                        out[outI++] = 0x82;
                    }
                }
            } else {
                if (in[inI] <= 0xef) {
                    if (in[inI] == 0xe0) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0xa1;
                    } else if (in[inI] == 0xe1) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xb7;
                    } else if (in[inI] == 0xe2) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0x9a;
                    } else if (in[inI] == 0xe3) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0x9e;
                    } else if (in[inI] == 0xe4) {
                        out[outI++] = 0xe2;
                        out[outI++] = 0x80;
                        out[outI++] = 0xb0;
                    } else if (in[inI] == 0xe5) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x82;
                    } else if (in[inI] == 0xe6) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x8a;
                    } else if (in[inI] == 0xe7) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x81;
                    } else if (in[inI] == 0xe8) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x8b;
                    } else if (in[inI] == 0xe9) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x88;
                    } else if (in[inI] == 0xea) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x8d;
                    } else if (in[inI] == 0xeb) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x8e;
                    } else if (in[inI] == 0xec) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x8f;
                    } else if (in[inI] == 0xed) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x8c;
                    } else if (in[inI] == 0xee) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x93;
                    } else if (in[inI] == 0xef) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x94;
                    }
                } else {
                    if (in[inI] == 0xf0) {
                        out[outI++] = 0xef;
                        out[outI++] = 0xa3;
                        out[outI++] = 0xbf;
                    } else if (in[inI] == 0xf1) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x92;
                    } else if (in[inI] == 0xf2) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x9a;
                    } else if (in[inI] == 0xf3) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x9b;
                    } else if (in[inI] == 0xf4) {
                        out[outI++] = 0xc3;
                        out[outI++] = 0x99;
                    } else if (in[inI] == 0xf5) {
                        out[outI++] = 0xc4;
                        out[outI++] = 0xb1;
                    } else if (in[inI] == 0xf6) {
                        out[outI++] = 0xcb;
                        out[outI++] = 0x86;
                    } else if (in[inI] == 0xf7) {
                        out[outI++] = 0xcb;
                        out[outI++] = 0x9c;
                    } else if (in[inI] == 0xf8) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xaf;
                    } else if (in[inI] == 0xf9) {
                        out[outI++] = 0xcb;
                        out[outI++] = 0x98;
                    } else if (in[inI] == 0xfa) {
                        out[outI++] = 0xcb;
                        out[outI++] = 0x99;
                    } else if (in[inI] == 0xfb) {
                        out[outI++] = 0xcb;
                        out[outI++] = 0x9a;
                    } else if (in[inI] == 0xfc) {
                        out[outI++] = 0xc2;
                        out[outI++] = 0xb8;
                    } else if (in[inI] == 0xfd) {
                        out[outI++] = 0xcb;
                        out[outI++] = 0x9d;
                    } else if (in[inI] == 0xfe) {
                        out[outI++] = 0xcb;
                        out[outI++] = 0x9b;
                    } else if (in[inI] == 0xff) {
                        out[outI++] = 0xcb;
                        out[outI++] = 0x87;
                    }
                }
            }
        }
    }
    return outI;
}

