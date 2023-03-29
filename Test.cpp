#include "sources/game.hpp"
#include "sources/player.hpp"
#include "sources/card.hpp"
#include "doctest.h"
 using namespace ariel;

 TEST_CASE("The start of the game"){

   // create 2 players each one have 0 cards
    Player p1("Tal");
    Player p2("Asaf");
    CHECK(p1.stacksize() == 0);
    CHECK(p2.stacksize() == 0);
    CHECK(p1.stacksize() == p2.stacksize());
    CHECK(p1.stacksize() + p2.stacksize() == 0);
    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);


   // the gane is begine so each player have 26 cards
    Game game(p1, p2);
    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);
    CHECK(p1.stacksize() == p2.stacksize());
    CHECK(p1.stacksize() + p2.stacksize() == 52);

 }


 TEST_CASE("The middle of the game"){
 
   Player p1("Tal");
   Player p2("Asaf");
   Game game(p1, p2);

   CHECK_NOTHROW(game.playTurn());
   CHECK(p1.stacksize() < 26);
   CHECK(p2.stacksize() < 26);


 }


TEST_CASE("The end of the game"){

   // create 2 players 
    Player p1("Tal");
    Player p2("Asaf");

    Game game(p1, p2);
    CHECK(p1.stacksize() == 0);
    CHECK(p2.stacksize() == 0);
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.playTurn());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.printWiner());


}