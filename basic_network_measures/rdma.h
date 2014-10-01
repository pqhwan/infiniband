#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <inttypes.h>
#include <endian.h>
#include <byteswap.h>
#include <getopt.h>
#include <sys/time.h>
#include <arpa/inet.h>
#include <infiniband/verbs.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

struct resources
{
    struct ibv_device_attr device_attr;
    /* Device attributes */
    struct ibv_port_attr port_attr;	/* IB port attributes */
    struct cm_con_data_t remote_props;	/* values to connect to remote side */
    struct ibv_context *ib_ctx;	/* device handle */
    struct ibv_pd *pd;		/* PD handle */
    struct ibv_cq *cq;		/* CQ handle */
    struct ibv_qp *qp;		/* QP handle */
    struct ibv_mr *mr;		/* MR handle for buf */
    char *buf;			/* memory buffer pointer, used for RDMA and send
                           ops */
    int sock;			/* TCP socket file descriptor */
};
