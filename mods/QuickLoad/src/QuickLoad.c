#include <custom_types.h>
#include <common.h>

bool hasRan = FALSE;

void mainFunc()
{

   if(!hasRan && _globalTimer > 20)
   {
      _isPastTitleScreen = TRUE;
      TheAdventureBegins();
      hasRan = TRUE;
   }

}
