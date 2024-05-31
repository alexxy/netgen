decltype(NG_MPI_Wtime) NG_MPI_Wtime = []()->double { throw no_mpi(); };
decltype(NG_MPI_Allgather) NG_MPI_Allgather = [](void*, int, NG_MPI_Datatype, void*, int, NG_MPI_Datatype, NG_MPI_Comm)->int { throw no_mpi(); };
decltype(NG_MPI_Allreduce) NG_MPI_Allreduce = [](void*, void*, int, NG_MPI_Datatype, NG_MPI_Op, NG_MPI_Comm)->int { throw no_mpi(); };
decltype(NG_MPI_Alltoall) NG_MPI_Alltoall = [](void*, int, NG_MPI_Datatype, void*, int, NG_MPI_Datatype, NG_MPI_Comm)->int { throw no_mpi(); };
decltype(NG_MPI_Barrier) NG_MPI_Barrier = [](NG_MPI_Comm)->int { throw no_mpi(); };
decltype(NG_MPI_Bcast) NG_MPI_Bcast = [](void*, int, NG_MPI_Datatype, int, NG_MPI_Comm)->int { throw no_mpi(); };
decltype(NG_MPI_Comm_c2f) NG_MPI_Comm_c2f = [](NG_MPI_Comm)->int { throw no_mpi(); };
decltype(NG_MPI_Comm_create) NG_MPI_Comm_create = [](NG_MPI_Comm, NG_MPI_Group, NG_MPI_Comm*)->int { throw no_mpi(); };
decltype(NG_MPI_Comm_create_group) NG_MPI_Comm_create_group = [](NG_MPI_Comm, NG_MPI_Group, int, NG_MPI_Comm*)->int { throw no_mpi(); };
decltype(NG_MPI_Comm_free) NG_MPI_Comm_free = [](NG_MPI_Comm*)->int { throw no_mpi(); };
decltype(NG_MPI_Comm_group) NG_MPI_Comm_group = [](NG_MPI_Comm, NG_MPI_Group*)->int { throw no_mpi(); };
decltype(NG_MPI_Comm_rank) NG_MPI_Comm_rank = [](NG_MPI_Comm, int*)->int { throw no_mpi(); };
decltype(NG_MPI_Comm_size) NG_MPI_Comm_size = [](NG_MPI_Comm, int*)->int { throw no_mpi(); };
decltype(NG_MPI_Finalize) NG_MPI_Finalize = []()->int { throw no_mpi(); };
decltype(NG_MPI_Gather) NG_MPI_Gather = [](void*, int, NG_MPI_Datatype, void*, int, NG_MPI_Datatype, int, NG_MPI_Comm)->int { throw no_mpi(); };
decltype(NG_MPI_Gatherv) NG_MPI_Gatherv = [](void*, int, NG_MPI_Datatype, void*, int*, int*, NG_MPI_Datatype, int, NG_MPI_Comm)->int { throw no_mpi(); };
decltype(NG_MPI_Get_count) NG_MPI_Get_count = [](NG_MPI_Status*, NG_MPI_Datatype, int*)->int { throw no_mpi(); };
decltype(NG_MPI_Get_processor_name) NG_MPI_Get_processor_name = [](char*, int*)->int { throw no_mpi(); };
decltype(NG_MPI_Group_incl) NG_MPI_Group_incl = [](NG_MPI_Group, int, int*, NG_MPI_Group*)->int { throw no_mpi(); };
decltype(NG_MPI_Init) NG_MPI_Init = [](int*, char***)->int { throw no_mpi(); };
decltype(NG_MPI_Init_thread) NG_MPI_Init_thread = [](int*, char***, int, int*)->int { throw no_mpi(); };
decltype(NG_MPI_Initialized) NG_MPI_Initialized = [](int*)->int { throw no_mpi(); };
decltype(NG_MPI_Iprobe) NG_MPI_Iprobe = [](int, int, NG_MPI_Comm, int*, NG_MPI_Status*)->int { throw no_mpi(); };
decltype(NG_MPI_Irecv) NG_MPI_Irecv = [](void*, int, NG_MPI_Datatype, int, int, NG_MPI_Comm, NG_MPI_Request*)->int { throw no_mpi(); };
decltype(NG_MPI_Isend) NG_MPI_Isend = [](void*, int, NG_MPI_Datatype, int, int, NG_MPI_Comm, NG_MPI_Request*)->int { throw no_mpi(); };
decltype(NG_MPI_Probe) NG_MPI_Probe = [](int, int, NG_MPI_Comm, NG_MPI_Status*)->int { throw no_mpi(); };
decltype(NG_MPI_Query_thread) NG_MPI_Query_thread = [](int*)->int { throw no_mpi(); };
decltype(NG_MPI_Recv) NG_MPI_Recv = [](void*, int, NG_MPI_Datatype, int, int, NG_MPI_Comm, NG_MPI_Status*)->int { throw no_mpi(); };
decltype(NG_MPI_Recv_init) NG_MPI_Recv_init = [](void*, int, NG_MPI_Datatype, int, int, NG_MPI_Comm, NG_MPI_Request*)->int { throw no_mpi(); };
decltype(NG_MPI_Reduce) NG_MPI_Reduce = [](void*, void*, int, NG_MPI_Datatype, NG_MPI_Op, int, NG_MPI_Comm)->int { throw no_mpi(); };
decltype(NG_MPI_Reduce_local) NG_MPI_Reduce_local = [](void*, void*, int, NG_MPI_Datatype, NG_MPI_Op)->int { throw no_mpi(); };
decltype(NG_MPI_Request_free) NG_MPI_Request_free = [](NG_MPI_Request*)->int { throw no_mpi(); };
decltype(NG_MPI_Scatter) NG_MPI_Scatter = [](void*, int, NG_MPI_Datatype, void*, int, NG_MPI_Datatype, int, NG_MPI_Comm)->int { throw no_mpi(); };
decltype(NG_MPI_Send) NG_MPI_Send = [](void*, int, NG_MPI_Datatype, int, int, NG_MPI_Comm)->int { throw no_mpi(); };
decltype(NG_MPI_Send_init) NG_MPI_Send_init = [](void*, int, NG_MPI_Datatype, int, int, NG_MPI_Comm, NG_MPI_Request*)->int { throw no_mpi(); };
decltype(NG_MPI_Startall) NG_MPI_Startall = [](int, NG_MPI_Request*)->int { throw no_mpi(); };
decltype(NG_MPI_Type_commit) NG_MPI_Type_commit = [](NG_MPI_Datatype*)->int { throw no_mpi(); };
decltype(NG_MPI_Type_contiguous) NG_MPI_Type_contiguous = [](int, NG_MPI_Datatype, NG_MPI_Datatype*)->int { throw no_mpi(); };
decltype(NG_MPI_Type_create_resized) NG_MPI_Type_create_resized = [](NG_MPI_Datatype, NG_MPI_Aint, NG_MPI_Aint, NG_MPI_Datatype*)->int { throw no_mpi(); };
decltype(NG_MPI_Type_create_struct) NG_MPI_Type_create_struct = [](int, int*, NG_MPI_Aint*, NG_MPI_Datatype*, NG_MPI_Datatype*)->int { throw no_mpi(); };
decltype(NG_MPI_Type_free) NG_MPI_Type_free = [](NG_MPI_Datatype*)->int { throw no_mpi(); };
decltype(NG_MPI_Type_get_extent) NG_MPI_Type_get_extent = [](NG_MPI_Datatype, NG_MPI_Aint*, NG_MPI_Aint*)->int { throw no_mpi(); };
decltype(NG_MPI_Type_indexed) NG_MPI_Type_indexed = [](int, int*, int*, NG_MPI_Datatype, NG_MPI_Datatype*)->int { throw no_mpi(); };
decltype(NG_MPI_Type_size) NG_MPI_Type_size = [](NG_MPI_Datatype, int*)->int { throw no_mpi(); };
decltype(NG_MPI_Wait) NG_MPI_Wait = [](NG_MPI_Request*, NG_MPI_Status*)->int { throw no_mpi(); };
decltype(NG_MPI_Waitall) NG_MPI_Waitall = [](int, NG_MPI_Request*, NG_MPI_Status*)->int { throw no_mpi(); };
decltype(NG_MPI_Waitany) NG_MPI_Waitany = [](int, NG_MPI_Request*, int*, NG_MPI_Status*)->int { throw no_mpi(); };
NG_MPI_Comm NG_MPI_COMM_NULL = 0;
NG_MPI_Comm NG_MPI_COMM_WORLD = 0;
NG_MPI_Datatype NG_MPI_CHAR = 0;
NG_MPI_Datatype NG_MPI_CXX_DOUBLE_COMPLEX = 0;
NG_MPI_Datatype NG_MPI_C_BOOL = 0;
NG_MPI_Datatype NG_MPI_DATATYPE_NULL = 0;
NG_MPI_Datatype NG_MPI_DOUBLE = 0;
NG_MPI_Datatype NG_MPI_FLOAT = 0;
NG_MPI_Datatype NG_MPI_INT = 0;
NG_MPI_Datatype NG_MPI_SHORT = 0;
NG_MPI_Datatype NG_MPI_UINT64_T = 0;
NG_MPI_Op NG_MPI_LOR = 0;
NG_MPI_Op NG_MPI_MAX = 0;
NG_MPI_Op NG_MPI_MIN = 0;
NG_MPI_Op NG_MPI_SUM = 0;
NG_MPI_Request NG_MPI_REQUEST_NULL = 0;
NG_MPI_Status* NG_MPI_STATUSES_IGNORE = 0;
NG_MPI_Status* NG_MPI_STATUS_IGNORE = 0;
int NG_MPI_ANY_SOURCE = 0;
int NG_MPI_ANY_TAG = 0;
int NG_MPI_MAX_PROCESSOR_NAME = 0;
int NG_MPI_PROC_NULL = 0;
int NG_MPI_ROOT = 0;
int NG_MPI_SUBVERSION = 0;
int NG_MPI_THREAD_MULTIPLE = 0;
int NG_MPI_THREAD_SINGLE = 0;
int NG_MPI_VERSION = 0;
void* NG_MPI_IN_PLACE = 0;
