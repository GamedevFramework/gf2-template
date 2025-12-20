#include "Game.h"

namespace gft {

  Game::Game(const std::filesystem::path& asset_directory)
  : gf::SceneSystem("Game", { 1600, 900 }, asset_directory)
  {

  }

}

