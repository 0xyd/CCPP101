#: 0004 what are va_* functions ?

va_* functions are used to handle **argument parameters**, namely *ap*. There are three main functions: *va_start*, *va_arg*, *va_end*. They are included in library *stdarg.h*.

*...* is the used to represent those variables implicitily declared in the function arguments. We need to declare those implicit with explicit *va_list ap* so that they will turn to argument parameters.

Then *va_start(va_list ap, last_arg)* is called to initialize the ap variables and *last_arg* is the last explicitly declared variable in the function. Every variable that is on its left side is not included in the argument parameter.

*va_arg(va_list ap, type)* will cast the type of the argument. *va_arg* cast the type of an argument incrementally. Therefore, it is often called in a for loop.

If we want to return a result related to argument paraters, we need to call *va_end(va_list ap)*.

## References
1. https://www.tutorialspoint.com/c_standard_library/c_macro_va_start.htm
1. https://www.tutorialspoint.com/c_standard_library/c_macro_va_arg.htm
1. https://www.tutorialspoint.com/c_standard_library/c_macro_va_end.htm
1. https://stackoverflow.com/questions/24345199/what-does-ap-stand-for-in-c-examples