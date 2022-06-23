#include "posix-mock.h"

uid_t mock_getuid();
uid_t mock_getgid();
int mock_setuid(uid_t uid);
int mock_setgid(gid_t gid);

uid_t mock_geteuid();
uid_t mock_getegid();
int mock_seteuid(uid_t uid);
int mock_setegid(gid_t gid);

pid_t mock_getpid();
pid_t mock_getpgrp();
pid_t mock_getppid();
pid_t mock_getpgid(pid_t pid);
int mock_setpgid(pid_t pid, pid_t pgid);

pid_t mock_setsid();
pid_t mock_getsid(pid_t pid);

int mock_chdir(const char *path);
int mock_chroot(const char *path);

int mock_getrlimit(int resource, rlimit *rlimits);
int mock_setrlimit(int resource, const rlimit *rlimits);

passwd *mock_getpwnam(const char *name);
passwd *mock_getpwuid(uid_t uid);
group *mock_getgrnam(const char *name);
group *mock_getgrgid(gid_t gid);

int mock_initgroups(const char *user, gid_t group);

int mock_setregid(gid_t rgid, gid_t egid);
int mock_setreuid(uid_t ruid, uid_t euid);

void mock_openlog(const char *ident, int option, int facility);
void mock_closelog();
void mock_syslog(int priority, const char *format, ...);
int mock_setlogmask(int mask);

int mock_gethostname(char *name, size_t len);
int mock_sethostname(const char *name, size_t len);

int mock_swapon(const char *path, int flags);
int mock_swapoff(const char *path);