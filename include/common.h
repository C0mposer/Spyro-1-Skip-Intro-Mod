#ifndef COMMON_H
#define COMMON_H

#include "custom_types.h"

//* ~ Functions ~
extern void TheAdventureBegins();                            //? This function calls the "The Adventure Begins" start sequence in the game.

//* ~ Symbols ~
extern bool _isPastTitleScreen; //0x8007566c                 //? TRUE If has started new game/continue game. Basically after you leave the title screen this is always TRUE.

extern int _globalTimer; //0x800749e0                        //? This is the global timer. It is running at all times from game boot up past BIOS.                

#endif /* COMMON_H */
