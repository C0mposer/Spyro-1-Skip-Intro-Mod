#include <custom_types.h>
#include <common.h>

bool hasRan = FALSE;                               //? Flag to only run this code once

void MainFunc()
{
   if(!hasRan && _globalTimer > 20)                //? If the code hasn't ran once yet, and the global timer is greater than 20. Checking global timer because I have to wait a few frames to call The Adventure Begins
   {
      _isPastTitleScreen = TRUE;                   //? This flag is checked by TheAdventureBeings() before it runs, so we must set this flag to TRUE.
      TheAdventureBegins();                        //? Call The Adventure Begins cutscene sequence
      hasRan = TRUE;                               //? Set hasRan to TRUE causing this code to never run again
   }
}