// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (c) 2025 Julien Bernard
#include "bits/Game.h"

int main()
{
  gft::Game game(std::filesystem::current_path() / "data");
  return game.run();
}
