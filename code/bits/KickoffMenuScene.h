// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (c) 2025 Julien Bernard
#ifndef GFT_KICKOFF_MENU_SCENE_H
#define GFT_KICKOFF_MENU_SCENE_H

#include <gf2/graphics/Scene.h>

#include "KickoffResources.h"

namespace gft {
  class Game;

  class KickoffMenuScene : public gf::Scene {
  public:
    KickoffMenuScene(Game* game, const KickoffResources& resources);

  private:

  };

}

#endif // GFT_KICKOFF_MENU_SCENE_H
