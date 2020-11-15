#include <include/TinyXML/tinyxml.h>
#include "include/DungeonGameApp.h"

int main() {
    MyGame::DungeonGameApp App;
    App.Init();
    App.MusicInit();
    App.Run();
    App.End();

    return 0;
}
