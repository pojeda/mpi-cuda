ml fosscuda/2019b buildenv 

mpicc -c main.c -o main.o
nvcc -c print.cu -o print.o

mpicc main.o print.o -lcuda -lcudart -lstdc++ -o exe 

srun --account=project --exclusive --ntasks=2 --gres=gpu:v100:2,gpuexcl --time=00:02:00 ./exe

Output:
srun: job 10754054 queued and waiting for resources
srun: job 10754054 has been allocated resources
GPU says, Hello world! 
GPU says, Hello world!
