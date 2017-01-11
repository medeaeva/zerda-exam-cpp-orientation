#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Cypher.h"


TEST_CASE ("Is is working?") {
  Cypher cypher;
  cypher.encrypt();
}
