# Module examples

These compile-only C++11 examples match the code snippets in `docs/modules/`.

Compile an example with:

```sh
g++ -std=c++11 -Wall -Wextra -Werror -pedantic -fsyntax-only \
    -I include examples/modules/pin.cpp
```

They demonstrate the definition interface only. They do not access registers or initialize hardware.
