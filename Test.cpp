#include "sources/game.hpp"
#include "sources/player.hpp"
#include "sources/card.hpp"
#include "doctest.h"
 using namespace ariel;

 TEST_CASE("The start of the game"){
    Player p1("Tal");
    Player p2("Asaf");
    Game game(p1, p2);
    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);

    CHECK(p1.stacksize() == p2.stacksize());
    CHECK(p1.stacksize() + p2.stacksize() == 52);
 }


 TEST_CASE("The middle of the game"){

 }


TEST_CASE("The end of the game"){

}