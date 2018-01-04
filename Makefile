all:
	cc --std=c99 -pedantic -Wall -Wextra -Werror -o main main.c player.c event.c
