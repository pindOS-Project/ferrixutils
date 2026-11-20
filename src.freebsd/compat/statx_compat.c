/* Ferrix compat: statx() wrapper for older musl that lacks it. */
#include <sys/stat.h>
#include <linux/statx.h>
#include <fcntl.h>
#include <sys/syscall.h>
#include <unistd.h>

int statx(int dfd, const char *path, int flags, unsigned int mask,
          struct statx *stx)
{
    return (int)syscall(SYS_statx, dfd, path, flags, mask, stx);
}
