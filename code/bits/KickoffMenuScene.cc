// SPDX-License-Identifier: GPL-3.0-or-later
// Copyright (c) 2025 Julien Bernard

#include "KickoffMenuScene.h"

#include "Game.h"

namespace gft {

  namespace {

    constexpr gf::Vec2F KickoffMenuSceneSize = { 1600, 900 };

  }


  KickoffMenuScene::KickoffMenuScene(Game* game, const KickoffResources& resources)
  : m_atlas({ 1024, 1024 }, game->render_manager())
  , m_main_title_text(&m_atlas, resources.main_title_text, game->render_manager(), game->resource_manager())
  {
    set_world_size(KickoffMenuSceneSize);
    set_world_center(KickoffMenuSceneSize / 2.0f);

    m_main_title_text.set_location(KickoffMenuSceneSize / 2.0f);
    m_main_title_text.set_origin({ 0.5f, 0.5f });
    add_world_entity(&m_main_title_text);
  }

}
