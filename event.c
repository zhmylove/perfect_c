#include "game.h"

event_queue_item_t event_queue[13];

void event_next() {
   // Assuming event from queue was: GIVE AN APPLE TO THE PLAYER
   player_event_handle(EV_EAT, S_APPLE);
}
