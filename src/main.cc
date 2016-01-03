#include "bitsu/Router.h"
#include <functional>
#include <iostream>
#include <unordered_map>

int main() {
  std::unordered_map<std::string, std::function<void()>> routes;
  routes["/book/new/"] = []() { std::cout << "test\n"; };
  bitsu::Router<std::function<void()>> router(routes);
  router.checkRoutes("/book/new/");
  return 0;
}
