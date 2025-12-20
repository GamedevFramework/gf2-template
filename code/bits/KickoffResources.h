// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (c) 2025 Julien Bernard
#ifndef GFT_KICKOFF_RESOURCES_H
#define GFT_KICKOFF_RESOURCES_H

#include <gf2/core/ResourceBundle.h>

namespace gft {
  class Game;

  struct KickoffResources {
    KickoffResources();

    gf::ResourceBundle bundle(Game* game) const;

  };

}

#endif // GFT_KICKOFF_RESOURCES_H
