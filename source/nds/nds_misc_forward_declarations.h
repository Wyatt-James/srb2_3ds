#ifndef NDS_MISC_FORWARD_DECLARATIONS_H
#define NDS_MISC_FORWARD_DECLARATIONS_H

// This file exists to fix modern C compatibility

#include "r_queue.h"

queuePacket *queueAllocPacketSafe(); // Located in, i_video.c, also used in i_system.c

#endif
