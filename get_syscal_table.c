#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/unistd.h>
#include <asm/pgtable.h>
#include <linux/slab.h>
#include <linux/syscalls.h>

unsigned long * obter_syscall_table_bf(void) 
{
  unsigned long * syscall_table;
  unsigned long int i;

  for (i=(unsigned long int)sys_close; i < ULONG_MAX; i += sizeof(void *))
  {
    syscall_table = (unsigned long *)i;

    if (syscall_table[__NR_close] == (unsigned long)sys_close)
    {
      return syscall_table;
    }
  }
  return NULL;
}
