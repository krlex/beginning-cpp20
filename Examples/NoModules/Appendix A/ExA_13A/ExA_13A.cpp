// Inline class member definitions (see Box.h)
#include <iostream>
#include "Box.h"

int main()
{
  Box boxy{ 1, 2, 3 };
  std::cout << boxy.volume() << std::endl;
}
