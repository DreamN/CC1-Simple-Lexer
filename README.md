# Simple Lexer
This assignment was submitted to 'Compiler Construction' subject, CE KMITL

Original flex file by **Jutta Degener, 2004 (http://www.quut.com/c/ANSI-C-grammar-l-1995.html)**
## Contributor
- Siridej Phanathanate
- Isara Naranirattisai

Both contributor contributed equally to this work

## Install GNU Flex and GCC
```
  $ sudo apt-get install flex
  $ sudo apt-get install gcc
```
## How to run?
- flex foobar.flex and you'll get lex.yy.c
```
  $ flex foobar.flex
```
- Compile lex.yy.c using gcc
```
  $ gcc lex.yy.c -lfl
```
- then run 'a.out' with test.c as input
```
  $ ./a.out < test.c
```
## Reference
- Original flex file (original-foobar.flex) by **Jutta Degener, 2004 (http://www.quut.com/c/ANSI-C-grammar-l-1995.html)**
- test.c by Adekovsky_CE
