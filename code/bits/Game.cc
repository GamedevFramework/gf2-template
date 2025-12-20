// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (c) 2025 Julien Bernard
#include "Game.h"

namespace gft {

  Game::Game(const std::filesystem::path& asset_directory)
  : gf::SceneSystem("Game", { 1600, 900 }, asset_directory)
  {
    gf::ResourceBundle kickoff_bundle = m_kickoff_resources.bundle(this);
    kickoff_bundle.load_from(resource_manager());

    m_kickoff_act = std::make_unique<KickoffAct>(this, m_kickoff_resources);

    push_scene(&m_kickoff_act->menu_scene);
  }

}

