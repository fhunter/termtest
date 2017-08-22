#ifndef __TERMINALCLASS_HPP__
#define __TERMINALCLASS_HPP__

#include <stdint.h>

class TerminalClass {
    public:
    TerminalClass(const int& width, const int& height);
    ~TerminalClass();
    char* getFrameBuffer();
    private:
    char* m_framebuffer;
    int cursor_x;
    int cursor_y;

};

#endif
