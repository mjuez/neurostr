#ifndef NEUROSTR_CORE_NEURITE_TYPE_H_
#define NEUROSTR_CORE_NEURITE_TYPE_H_

#include <iostream>

namespace neurostr{

  // C++11 strong typed enum
// Neurite type enum  - Note: They match standarized SWC types for convenience
enum class NeuriteType : int {
  kUndefined = 0,
  kSoma = 1,
  kAxon = 2,
  kDendrite = 3,
  kApical = 4,
  kOther = 5
};

std::ostream& operator<<(std::ostream& os, const neurostr::NeuriteType& t);

}



#endif
