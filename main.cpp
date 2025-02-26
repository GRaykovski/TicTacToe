#include "ConsoleWriter.h"
#include "ConsoleReader.h"
#include "GameSession.h"

int main() {
    //these two statements will be called by the server
    GameSession session(Player("1", Symbol::CIRCLE),
                        Player("2", Symbol::CROSS),
                        new ConsoleWriter, new ConsoleReader);
    session.play();

    //this is console-game-specific
    printf(AsciiEscapeCodes::MoveToPos, 15, 15);
    return 0;
}
