# printf

create our own customized printf function in C.

#function overview


Printf function in C is buit for the purpose of sending the formated string to the standard input output header file which is stdio.h. this string can display formatted variables and special control characters, such as new lines("\n"), backspaces('\b') and tabspaces('\t') and so on.

The prototype that we use will be "int_printf(const char* format, ...)" where format: this is the string that contains the text to be written to stdout. It can optinally contain embedded format tags that are replaced by the values specified in subsewuent additional aarguments and formatted as requested.
The format tags prototype is %[flags][width][.precision][length]specifier(c, d or i, e, E, f, g, G, o, s, u, x, X, p, n, %) these all are specifiers, flags are( -, +, "space", #, 0), width((number), *), .precision(.number, .*) and length( h, I, L) and there are aditional arguments - depending on the format string, the function may expect a sequence of additional arguments, each containing one value to be inserted instead of each %-tag specified in the format parameter (if any).
There should be the same number of these arguments as the number of %-tags that expect a value.

