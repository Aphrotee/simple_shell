#ifndef MAIN_H
#define MAIN_H
extern char *_getenv(const char *name);
extern int _setenv(const char *name, const char *value, int overwrite);
extern int _unsetenv(const char *name);
#endif
