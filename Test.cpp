#include "sources/game.hpp"
#include "sources/player.hpp"
#include "sources/card.hpp"
#include "doctest.h"
 using namespace ariel;

 TEST_CASE("First - create 2 players"){
    Player p1("Tal");
    Player p2("Asaf");
    Game game(p1, p2);

    CHECK(p1.stacksize() == p2.stacksize() == 26);
    CHECK(p1.stacksize() + p2.stacksize() == 54);
 }


