#pragma once

#include "bitsu/Route.h"
#include <string>
#include <vector>

namespace bitsu {

template <typename T> class Router {
public:
  Router(const std::vector<Route<T>> &routes) : routes(routes){};
  void checkRoutes(const std::string &basePath) {
    for (auto route : routes) {
      if (basePath == route.path) {
        route.callback();
      }
    }
  }

private:
  const std::vector<Route<T>> routes;
};
}
