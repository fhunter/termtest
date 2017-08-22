#include <rfb/rfb.h>
#include "config.h"
#include "terminalclass.hpp"

int main(int argc, char** argv) {
    rfbScreenInfoPtr server=rfbGetScreen(&argc,argv,display_width,display_height,8,3,4);
    TerminalClass terminal(display_width,display_height);
    server->frameBuffer=terminal.getFrameBuffer();
    rfbInitServer(server);
    rfbRunEventLoop(server,-1,TRUE);
    while(1) {
        //Do some render
        server->frameBuffer[random()%(display_width*display_height*4)]=random()%256;
        rfbMarkRectAsModified(server,0,0,display_width,display_height);
    };
    rfbScreenCleanup(server);
    return 0;
}
