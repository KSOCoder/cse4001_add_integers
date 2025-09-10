#include <types.h>
#include <kern/errno.h>
#include <syscall.h>

int sys_add_three_integers(int a, int b, int c, int *retval){
	*retval = a + b + c;

	return 0;
}
