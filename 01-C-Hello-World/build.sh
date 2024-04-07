LIBS="-lcsfml-graphics -lcsfml-window"

zig cc main.c ${LIBS} -o main
