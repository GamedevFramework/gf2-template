#include "bits/Game.h"

#include "config.h"

int main()
{
  gft::Game game(gft::GameDataDirectory);
  return game.run();
}
