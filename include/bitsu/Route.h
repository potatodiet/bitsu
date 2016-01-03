#pragma once

#include <functional>
#include <string>

namespace bitsu {
template <typename T> struct Route {
public:
  std::string path;
  std::function<T> callback;
};
}
