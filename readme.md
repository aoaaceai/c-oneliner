# C oneliner
These zsh scripts compiles and runs C/C++ programs in one line.

# Usage

Currently, this package includes 2 scripts, `c` and `ppc`. Both of the syntaxes are the same, so only usage for C is shown here.

## Basic

This program:

```c
#include <stdio.h>
int main() {
    printf("Hello, World!\n");
}
```

Can be run by using a single command:

```bash
# basic usage: compile a program and run it
c main.c
ppc main.cpp
```

Result:

```
Hello, World!
total   0.001
user    0.00s
sys     0.00s
mem     1 MB
```

## Compile with arguments

```bash
# compile with parameters passed to gcc
c main.c -O2 main.c
```

## Run with arguments

Consider this program:

```c
#include <stdio.h>
int main(int argc, char **argv) {
    printf("The first argument is %s\n", argv[1]);
    printf("The second argument is %s\n", argv[2]);
}
```

The parameters can be passed to it by using:

```bash
# arguments passed to the compiled program should be after the word `end`
c main.c end FIRST second
```

Result:

```
The first argument is FIRST
The second argument is second
total   0.001
user    0.00s
sys     0.00s
mem     1 MB
```

Arguments before `end` will be passed to the compiler, so the command

```bash
c main.c -O2 -o test end FIRST second
```

will compile `main.c` with optimization `O2`, output to `test`, then run it with arguments `FIRST` and `second`.

# Install

```bash
./configure
make install
```

