// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (c) 2025 Julien Bernard

#include "KickoffResources.h"

#include <gf2/framework/BundleBuilder.h>

#include "Game.h"

namespace gft {

  KickoffResources::KickoffResources()
  {

  }

  gf::ResourceBundle KickoffResources::bundle(Game* game) const
  {
    gf::BundleBuilder builder(game);

    return builder.make_bundle();
  }


}
