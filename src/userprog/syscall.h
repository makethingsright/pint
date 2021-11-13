#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

void syscall_init (void);
void exit(int);
int write(int fd, const void* buffer, unsigned size);
void validate_address(void *);

#endif /* userprog/syscall.h */
