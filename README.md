# CLevenshtein

CLevenshtein is a C library for calculating [Levenshtein distance](https://en.wikipedia.org/wiki/Levenshtein_distance) between two char sequences.

The implementation forks from [Git](https://github.com/git/git)'s weighted version of Levenshtein distance algorithm.

## Installation

```
mkdir build && cd build
cmake ..
make && make install
```

or using [CPM](https://github.com/cpm-cmake/CPM.cmake) in your CMake project:

```cmake
CPMAddPackage(
  NAME clevenshtein
  GITHUB_REPOSITORY depotpkg/clevenshtein
  GIT_TAG master
)
```

## Usage

```c
#include "levenshtein.h"

levenshtein("bar", "baz", 0, 2, 1, 3);
```

## License

The MIT License.
