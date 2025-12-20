// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (c) 2025 Julien Bernard
#include "bits/Game.h"

#include "config.h"

int main()
{
  gft::Game game(gft::GameDataDirectory);
  return game.run();
}
