<h1>Compilation</h1>
1. First of all, you should compile the library using these commands:
  
```
gcc -c getch.c
gcc -c CUIMenuLib.c
```

2. Next, you should compile your file that uses this library:
  
`gcc -c yourfile.c`

3. Finally, you should create your binary file:
  
`gcc getch.o CUIMenuLib.o yourfile.o -o your_bin_filename`

4. All in one block:

```
gcc -c getch.c
gcc -c CUIMenuLib.c
gcc -c yourfile.c
gcc getch.o CUIMenuLib.o yourfile.o -o your_bin_filename
  ```

Done.


<i>P.S.  If you're on Windows you can use a ready-made library getch, by adding #include <getch.h> to CUIMenuLib.h file</i>
  
<i>P.S.2 You can get compiler.sh file on the CUIMenuLib directory, which also contains these commands</i>
