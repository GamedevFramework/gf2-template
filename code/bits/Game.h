// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (c) 2025 Julien Bernard
#include <filesystem>
#include <memory>

#include <gf2/framework/SceneSystem.h>

#include "KickoffAct.h"
#include "KickoffResources.h"

namespace gft {

  class Game : public gf::SceneSystem {
  public:
    Game(const std::filesystem::path& asset_directory);

  private:
    KickoffResources m_kickoff_resources;
    std::unique_ptr<KickoffAct> m_kickoff_act;
  };

}
