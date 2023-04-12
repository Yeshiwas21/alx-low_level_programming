#include "main.h"

/**
 * exit_bul - Exit Statue Shell
 * @cmd: Parsed Command
 * @input: User Input
 * @argv:Program Name
 * @counter:Excute Counter
 * Return: Void(Exit Status)
 */
void  exit_bul(char **cmd, char *input, char **argv, int counter)
{
int status, i = 0;

if (cmd[1] == NULL)
{
free(input);
free(cmd);
exit(EXIT_SUCCESS);
}
while (cmd[1][i])
{
if (_isalpha(cmd[1][i++]) != 0)
{
_prerror(argv, c, cmd);
break;
}
else
{
statue = _atoi(cmd[1]);
free(input);
free(cmd);
exit(statue);
}
}
}

/**
 * change_dir - Change Dirctory
 * @cmd: Parsed Command
 * @last_cmd: Statue Last Command Excuted
 * Return: 0 Succes 1 Failed (For Old Pwd Always 0 Case No Old PWD)
 */
int change_dir(char **cmd, __attribute__((unused))int last_cmd)
{
int value = -1;
char cwd[PATH_MAX];

if (cmd[1] == NULL)
	value = chdir(getenv("HOME"));
else if (_strcmp(cmd[1], "-") == 0)
{
value = chdir(getenv("OLDPWD"));
}
else
	value = chdir(cmd[1]);
if (value == -1)
{
perror("hsh");
return (-1);
}
else if (value != -1)
{
getcwd(cwd, sizeof(cwd));
setenv("OLDPWD", getenv("PWD"), 1);
setenv("PWD", cwd, 1);
}
return (0);
}

/**
 * dis_env - Display Enviroment Variable
 * @cmd:Parsed Command
 * @sl:Status of Last command Excuted
 * Return:Always 0
 */
int dis_env(__attribute__((unused)) char **cmd, __attribute__((unused)) int sl)
{
size_t i;
int len;

for (i = 0; environ[i] != NULL; i++)
{
len = _strlen(environ[i]);
write(1, environ[i], len);
write(STDOUT_FILENO, "\n", 1);
}
return (0);
}

/**
 * display_help - Displaying Help For Builtin
 * @cmd:Parsed Command
 * @last_cmd: Status Of Last Command Excuted
 * Return: 0 Succes -1 Fail
 */
int display_help(char **cmd, __attribute__((unused))int last_cmd)
{
int file_d, file_write, file_read = 1;
char c;

file_d = open(cmd[1], O_RDONLY);
if (file_d < 0)
{
perror("Error");
return (0);
}
while (file_read > 0)
{
file_read = read(fd, &c, 1);
file_write = write(STDOUT_FILENO, &c, rd);
if (file_write < 0)
{
return (-1);
}
}
_putchar('\n');
return (0);
}

/**
 * echo_bul - Excute Echo Cases
 * @status:Status Of Last Command Excuted
 * @cmd: Parsed Command
 * Return: Always 0
 */
int echo_bul(char **cmd, int status)
{
char *path;
unsigned int  pid = getppid();

if (_strncmp(cmd[1], "$?", 2) == 0)
{
print_number_in(st);
PRINTER("\n");
}
else if (_strncmp(cmd[1], "$$", 2) == 0)
{
print_number(pid);
PRINTER("\n");
}
else if (_strncmp(cmd[1], "$PATH", 5) == 0)
{
path = _getenv("PATH");
PRINTER(path);
PRINTER("\n");
free(path);
}
else
	return (print_echo(cmd));
return (1);
}
