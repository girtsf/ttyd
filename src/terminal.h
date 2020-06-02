#ifndef TTYD_TERMINAL_H
#define TTYD_TERMINAL_H

pid_t pty_fork(int *pty, const char *file, char *const argv[], const char *term, int min_cols,
               int min_rows);

int pty_resize(int pty, int cols, int rows);

#endif  // TTYD_TERMINAL_H
