#ifndef _SHELL_H_
#define _SHELL_H_

<<<<<<< HEAD
/**###### environ var ######*/

extern char **environ;

/**##### MACROS ######*/

#define BUFSIZE 1024
#define DELIM " \t\r\n\a"
#define PRINTER(c) (write(STDOUT_FILENO, c, _strlen(c)))

/**###### LIBS USED ######*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <linux/limits.h>

/**###### STRING FUNCTION ######*/

char *_strtok(char *str, const char *tok);
unsigned int check_delim(char c, const char *str);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
int _putchar(char c);
int _atoi(char *s);
void _puts(char *str);
int _strcmp(char *s1, char *s2);
int _isalpha(int c);
void array_rev(char *arr, int len);
int intlen(int num);
char *_itoa(unsigned int n);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strchr(char *s, char c);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strdup(char *str);

/**###### MEMORIE  MANGMENT ####*/

void free_env(char **env);
void *fill_an_array(void *a, int el, unsigned int len);
char *_memcpy(char *dest, char *src, unsigned int n);
void *_calloc(unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void free_all(char **input, char *line);

/**###### INPUT Function ######*/

void prompt(void);
void signal_to_handel(int sig);
char *_getline(void);

/** ###### Command parser and extractor ###*/

int path_cmd(char **line);
char *_getenv(char *name);
char **parse_cmd(char *cmd);
int handle_builtin(char **cmd, int er);
void read_file(char *filename, char **argv);
char *build(char *token, char *value);
int check_builtin(char **cmd);
void creat_envi(char **envi);
int check_cmd(char **tokens, char *line, int count, char **argv);
void treat_file(char *line, int counter, FILE *fd, char **argv);
void exit_bul_for_file(char **cmd, char *line, FILE *fd);

/** ####BUL FUNC #####*/

void hashtag_handle(char *buff);
int history(char *input);
int history_dis(char **cmd, int er);
int dis_env(char **cmd, int er);
int change_dir(char **cmd, int er);
int display_help(char **cmd, int er);
int echo_bul(char **cmd, int er);
void  exit_bul(char **cmd, char *input, char **argv, int c);
int print_echo(char **cmd);

/** ####error handle and Printer ####*/
void print_number(unsigned int n);
void print_number_in(int n);
void print_error(char *line, int c, char **argv);
void _prerror(char **argv, int c, char **cmd);

/**
 * struct bulltin - contain bultin to handle and function to excute
 * @command:pointer to char
 * @fun:fun to excute when bultin true
 */

typedef struct  bulltin
{
char *command;
int (*fun)(char **line, int er);
} bul_t;

#endif
=======
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

#define END_OF_FILE -2
#define EXIT -3

/* Global environemnt */
extern char **environ;
/* Global program name */
char *name;
/* Global history counter */
int hist;

/**
 * struct list_s - A new struct type defining a linked list.
 * @dir: A directory path.
 * @next: A pointer to another struct list_s.
 */
typedef struct list_s
{
char *dir;
struct list_s *next;
} list_t;

/**
 * struct builtin_s - A new struct type defining builtin commands.
 * @name: The name of the builtin command.
 * @f: A function pointer to the builtin command's function.
 */
typedef struct builtin_s
{
char *name;
int (*f)(char **argv, char **front);
} builtin_t;

/**
 * struct alias_s - A new struct defining aliases.
 * @name: The name of the alias.
 * @value: The value of the alias.
 * @next: A pointer to another struct alias_s.
 */
typedef struct alias_s
{
char *name;
char *value;
struct alias_s *next;
} alias_t;

/* Global aliases linked list */
alias_t *aliases;

/* Main Helpers */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char **_strtok(char *line, char *delim);
char *get_location(char *command);
list_t *get_path_dir(char *path);
int execute(char **args, char **front);
void free_list(list_t *head);
char *_itoa(int num);

/* Input Helpers */
void handle_line(char **line, ssize_t read);
void variable_replacement(char **args, int *exe_ret);
char *get_args(char *line, int *exe_ret);
int call_args(char **args, char **front, int *exe_ret);
int run_args(char **args, char **front, int *exe_ret);
int handle_args(int *exe_ret);
int check_args(char **args);
void free_args(char **args, char **front);
char **replace_aliases(char **args);

/* String functions */
int _strlen(const char *s);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, size_t n);
char *_strcpy(char *dest, const char *src);
char *_strchr(char *s, char c);
int _strspn(char *s, char *accept);
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);

/* Builtins */
int (*get_builtin(char *command))(char **args, char **front);
int shellby_exit(char **args, char **front);
int shellby_env(char **args, char __attribute__((__unused__)) **front);
int shellby_setenv(char **args, char __attribute__((__unused__)) **front);
int shellby_unsetenv(char **args, char __attribute__((__unused__)) **front);
int shellby_cd(char **args, char __attribute__((__unused__)) **front);
int shellby_alias(char **args, char __attribute__((__unused__)) **front);
int shellby_help(char **args, char __attribute__((__unused__)) **front);

/* Builtin Helpers */
char **_copyenv(void);
void free_env(void);
char **_getenv(const char *var);

/* Error Handling */
int create_error(char **args, int err);
char *error_env(char **args);
char *error_1(char **args);
char *error_2_exit(char **args);
char *error_2_cd(char **args);
char *error_2_syntax(char **args);
char *error_126(char **args);
char *error_127(char **args);

/* Linkedlist Helpers */
alias_t *add_alias_end(alias_t **head, char *name, char *value);
void free_alias_list(alias_t *head);
list_t *add_node_end(list_t **head, char *dir);
void free_list(list_t *head);

void help_all(void);
void help_alias(void);
void help_cd(void);
void help_exit(void);
void help_help(void);
void help_env(void);
void help_setenv(void);
void help_unsetenv(void);
void help_history(void);

int proc_file_commands(char *file_path, int *exe_ret);
#endif /* _SHELL_H_ */
>>>>>>> a0a9acf9f9a40b0082dc2e25d5127b50d590ba3a
