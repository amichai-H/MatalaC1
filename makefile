CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=basicMath.o power.o
OBJECTS_ALL=libmyMath.so libmyMath.a mains progmaind
FLAGS= -Wall -g

all:  mains maind mymathd mymaths
mymathd: libmyMath.so
mymaths: libmyMath.a
mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
maind: $(OBJECTS_MAIN) libmyMath.so
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
libmyMath.so: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
libmyMath.a: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
clean:
	rm *.o *.a *.so mains maind

.PHONY: clean all mymathd mymaths
