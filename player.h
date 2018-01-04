#ifndef PLAYER_H
#define PLAYER_H

#include "player_name.h"

typedef enum player_stuff {
   S_APPLE,
   S_AK47,
   S_SIZE
} player_stuff_t;

void player_event_handle(event_t arg, player_stuff_t object);

#endif
