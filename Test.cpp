//
// Created by eli on 05/04/2020.
//
#include "doctest.h"
#include "FamilyTree.hpp"
#include <string>
using namespace std;
using namespace family ;

TEST_CASE("check") {
   string a="gg";
   for (int i=0; i<120;i++){ CHECK(a== "gg");}
}
