#ifndef "MAIN.H"
#define "MAIN.H"

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_add(unsigned int num);
int print_some_string(va_list val);
int print_pointer(va_list val);
int print_hex_add(unsigned long int num);

#endif
