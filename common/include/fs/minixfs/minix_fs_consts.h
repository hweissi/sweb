#ifndef MINIX_FS_CONSTS__
#define MINIX_FS_CONSTS__

#define NUM_ZONE_ADDRESSES 256
#define ZONE_SIZE 1024
#define BLOCK_SIZE 1024
#define INODE_SIZE 64
#define INODES_PER_BLOCK(b) ((b)/INODE_SIZE)
#define DENTRY_SIZE 64
#define MAX_NAME_LENGTH 60

#endif
