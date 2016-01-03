#include "bitsu/Route.h"
#include "bitsu/Router.h"
#include <iostream>
#include <vector>

int main() {
  typedef void(CallbackType)();

  bitsu::Route<CallbackType> exampleRoute;
  exampleRoute.path = "/book/new/";
  exampleRoute.callback = []() { std::cout << "test\n"; };

  bitsu::Router<CallbackType> router({exampleRoute});
  router.checkRoutes("/book/new/");
  return 0;
}
