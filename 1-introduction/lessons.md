# Introduction Lessons

## Treated Arguments

- [Difference between `gcc` and `g++`](#difference-gcc-gpp)
- [The `main()` function and return value](#main-return-value)
- [Methods to print on screen](#printf-vs-cout)

<a id="difference-gcc-gpp"></a>
## 1. Difference between gcc and g++

`gcc` and `g++` are both compiler drivers from the GNU Compiler Collection (GCC), but they have different defaults and are typically used for different languages.

- `gcc` is commonly used for C programs.
- `g++` is commonly used for C++ programs.

Main practical difference during linking:

- `g++` automatically links the C++ standard library (`libstdc++`).
- `gcc` does not automatically link `libstdc++` when building C++ code.

This is why a C++ file that uses features like `cout` may fail with `gcc` at link time with errors such as `undefined reference to std::cout`.

### Recommended usage

- Use `gcc` for `.c` files.
- Use `g++` for `.cpp` (or `.cc`, `.cxx`) files.

### Example

```bash
gcc hello.c -o hello
g++ main.cpp -o main
```

If you still choose `gcc` for C++, you usually need to link the C++ standard library manually:

```bash
gcc main.cpp -lstdc++ -o main
```

<a id="main-return-value"></a>
## 2. The `main()` function and return value

In C++, execution starts from the function named `main`. It is the entry point of a program.

Common valid forms are:

```cpp
int main() {
	// program code
}
```

and

```cpp
int main(int argc, char* argv[]) {
	// program code that can read command-line arguments
}
```

### What the return value means

`main` returns an integer exit status to the operating system.

- `return 0;` means the program ended successfully.
- Any non-zero value usually means an error or special termination condition.

Example:

```cpp
int main() {
	cout << "Hello world";
	return 0;
}
```

If you omit `return 0;` at the end of `main`, modern C++ treats it as if `return 0;` were written explicitly.

### Why exit codes are useful

Exit codes are important when programs are used in scripts, CI pipelines, or automation tools.

- Success (`0`) can continue the workflow.
- Failure (non-zero) can stop the workflow or trigger error handling.


<a id="printf-vs-cout"></a>
## Printf vs cout
While `printf()` derivers from C, C++ uses traditionally `std::cout` to print to the console