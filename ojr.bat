cls
echo compiler
@g++ "%1" -lm -O2 -pipe -o"%~n1.exe"
@%~n1.exe