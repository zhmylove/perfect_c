#include "game.h"

void player_event_handle(event_t arg, player_stuff_t object) {
   if (arg == EV_EAT) {
      // Do smth
      (void)object;
      return;
   }

   return;
}
