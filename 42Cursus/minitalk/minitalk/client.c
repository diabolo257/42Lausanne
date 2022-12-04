#include <signal.h>
#include <unistd.h> //getpid function
#include <stdio.h>
#include <strings.h>
#include <sys/wait.h>
#include <stdlib.h> //atoi

int main(int argc, char **argv)
{
	int	pid = atoi(argv[1]);
	char *message = argv[2];
	int	i = 0;
	int	j;
	while (message[i])
	{
		j = 0;
		while (j < 8)
		{
			if ((message[i] >> j) & 1)
				kill(pid, SIGUSR1); // every SIGUSR1 means that it is the next ascii
			else
				kill(pid, SIGUSR2); // correct ascii
			usleep(10);
			//printf("j : %d ", j);
			j++;
		}

		i++;
	}

}