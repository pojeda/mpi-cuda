#include "mpi.h"
 
int main(int argc, char *argv[])
{

MPI_Init(&argc, &argv);
int myRank;
int numProcs;
 
        MPI_Comm_rank(MPI_COMM_WORLD, &myRank);
        MPI_Comm_size(MPI_COMM_WORLD, &numProcs);
        
        print_gpu();
 
}
