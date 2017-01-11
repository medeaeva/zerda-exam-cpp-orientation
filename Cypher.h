
#ifndef CYPHER_H_
#define CYPHER_H_

#include "Fileh.h"

class Cypher {
public:
  std::string encrypt (std::string text, int shift);
};

#endif /* CYPHER_H_ */
