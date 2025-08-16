# ft_printf
<br>
<p align="center">
    <img src=https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png alt="Logo C" width="125">
</p>

### Skills

- Variadic functions
- Custom format parsing
- Implementation of formatted output
- Conversion and number/string manipulation
- Debugging and testing
<br>
<br>

## About

`ft_printf` is a custom implementation of the C standard `printf` function.

It reproduces formatted output without relying on libc's internal buffer management, and supports the following conversions: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X` and `%%`.

The function prototype is `int ft_printf(const char *, ...);`, making use of variadic arguments (`<stdarg.h>`) and a custom parsing system to handle dynamic inputs.

The return value of `ft_printf` corresponds to the number of characters printed.

The project is compiled into a static library `libftprintf.a` using the `ar` command.
<br>
<br>

## Usage

**1. Clone the repository**
```bash
git clone git@github.com:maudiffr/ft_printf.git
cd ft_printf
```

**2. Compile the library using `make`**
```bash
make
```
This will create the static library file:
```
libftprintf.a
```
You need to include its header `<ft_printf.h>` in your future code.

**3. Write a custom test file to test functions**
```c
// main.c

#include "ft_printf.h"

int main(void)
{
    int ret;

    // Basic conversions
    ret = ft_printf("Char: %c\n", 'A');
    ret += ft_printf("String: %s\n", "Hello");
    ret += ft_printf("Pointer: %p\n", &ret);
    ret += ft_printf("Decimal: %d\n", 42);
    ret += ft_printf("Integer: %i\n", 42);
    ret += ft_printf("Unsigned: %u\n", 42);
    ret += ft_printf("Hex lower: %x\n", 42);
    ret += ft_printf("Hex upper: %X\n", 42);
    ret += ft_printf("Percent: %%\n\n");

    ft_printf("Total printed characters: %d\n", ret);

    return 0;
}
```
Compile and run:
```bash
gcc main.c libftprintf.a -o test_program
./test_program
```