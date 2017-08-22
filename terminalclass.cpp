#include "terminalclass.hpp"

TerminalClass::TerminalClass(const int& width, const int& height) {
    m_framebuffer=new char[width*height*4];
    cursor_x=1;
    cursor_y=1;
}

TerminalClass::~TerminalClass() {
    delete m_framebuffer;
}

char* TerminalClass::getFrameBuffer() {
    return m_framebuffer;
}

