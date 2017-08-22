#ifndef __FONTCLASS_HPP__
#define __FONTCLASS_HPP__

#include <stdint.h>

class FontClass {
    FontClass();
    ~FontClass();
    bool loadFromFile();
    uint16_t* glyph(char c);
    uint8_t glyphHeight();
    uint8_t glyphWidth();
};

#endif
