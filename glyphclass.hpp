#ifndef __GLYPHCLASS_HPP__
#define __GLYPHCLASS_HPP__

#include <stdint.h>

class GlyphClass {
    GlyphClass();
    ~GlyphClass();
    bool loadFromFile();
    uint16_t* glyph(char c);
    uint8_t glyphHeight();
    uint8_t glyphWidth();
};

#endif
