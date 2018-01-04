#ifndef PLAYER_H
#define PLAYER_H

typedef enum player_stuff {
   S_APPLE,
   S_AK47,
   S_SIZE
} player_stuff_t;

typedef enum player_name {
   PLAYER1,
   PLAYER2,
   PLAYER3
} player_name_t;

void player_event_handle(event_t arg, player_stuff_t object);

#endif
