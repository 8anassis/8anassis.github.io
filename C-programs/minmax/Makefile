# paths
MODULES = ../../my_modules
INCLUDE = ../../include

# Compile options. Το -I<dir> λέει στον compiler να αναζητήσει εκεί include files
CFLAGS = -Wall -Werror -g -I$(INCLUDE)

# Αρχεία .o
OBJS = Minmax.o $(MODULES)/stats.o

# Το εκτελέσιμο πρόγραμμα
EXEC = Minmax

# Παράμετροι για δοκιμαστική εκτέλεση
#ARGS = 1 -2 3 52

$(EXEC): $(OBJS)
	gcc $(OBJS) -o $(EXEC)

clean:
	rm -f $(OBJS) $(EXEC)

run: $(EXEC)
	./$(EXEC) $(ARGS)