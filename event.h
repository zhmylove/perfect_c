#ifndef EVENT_H
#define EVENT_H

typedef enum event {
   EV_NONE,
   EV_EAT,  // make player eat smth from his stuff
   EV_SIZE
} event_t;

typedef struct event_queue_item {
   player_name_t from;
   player_name_t to;
   event_t event;
} event_queue_item_t;

// Select event from queue and call handler
void event_next();

#endif
