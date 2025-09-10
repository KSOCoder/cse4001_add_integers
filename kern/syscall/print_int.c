#include <types.h>
#include <kern/errno.h>
#include <syscall.h>
#include <lib.h>

int sys_print_int(const char *str, int x){
	kprintf("%s %d\n", str, x);

	return 0;
}
