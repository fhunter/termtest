#include <rfb/rfb.h>
#include "config.h"

int main(int argc, char** argv) {
    rfbScreenInfoPtr server=rfbGetScreen(&argc,argv,display_width,display_height,8,3,4);
    server->frameBuffer=(char*)malloc(display_width*display_height*4);
    rfbInitServer(server);
    rfbRunEventLoop(server,-1,TRUE);
    while(1) {
        //Do some render
        server->frameBuffer[random()%(display_width*display_height*4)]=random()%256;
        rfbMarkRectAsModified(server,0,0,display_width,display_height);
    };
    free(server->frameBuffer);
    rfbScreenCleanup(server);
    return 0;
}
