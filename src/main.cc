#include "bitsu/Router.h"
#include <functional>
#include <iostream>
#include <unordered_map>

int main() {
  typedef std::function<void()> CallbackType;
  const std::unordered_map<std::string, CallbackType> routes = {
      {"/book/new/", []() { std::cout << "test\n"; }}};
  bitsu::Router<CallbackType> router(routes);
  router.checkRoutes("/book/new/");
  return 0;
}
