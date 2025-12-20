#include <filesystem>
#include <memory>

#include <gf2/framework/SceneSystem.h>

namespace gft {

  class Game : public gf::SceneSystem {
  public:
    Game(const std::filesystem::path& asset_directory);

  private:
  };

}
