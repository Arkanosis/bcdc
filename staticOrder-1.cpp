/*
** BigCrunch data compression library
** (C) 2010 Arkanosis
** jroquet@arkanosis.net
**
** Released under the MIT/X11 license
*/

#include <fstream>
#include <iostream>

int main(int argc, char const* argv[])
{
  if (argc != 2)
  {
    std::cerr << "Usage: bcdc <inputFile>" << std::endl;
    return 1;
  }

  char buffer;
  double model[256];

  for (unsigned int i = 0; i < 256; ++i)
    model[i] = 0;

  // First pass: building the model
  std::ifstream input(argv[1]);
  while (input.get(buffer))
    ++model[int(buffer)];
  for (unsigned int i = 0; i < 256; ++i)
    model[i] /=

  // Second pass: compressing
}
