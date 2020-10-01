CPP = icpc
FLAGS = -O0 -g
SIZE = 512

run: main.cpp mult_v1.o
	$(CPP) $(FLAGS) main.cpp mult_v1.o -o exec.run
	srun exec.run $(SIZE)

mult_v1.o: multiply_v1.cpp
	$(CPP) multiply_v1.cpp -c -o mult_v1.o 

