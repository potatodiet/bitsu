#pragma once

#include <string>
#include <unordered_map>

namespace bitsu {

template <typename T> class Router {
public:
  Router(const std::unordered_map<std::string, T> &routes) : routes(routes){};
  void checkRoutes(const std::string &basePath) {
    for (auto route : routes) {
      if (basePath == route.first) {
        route.second();
      }
    }
  }

private:
  const std::unordered_map<std::string, T> routes;
};
}
