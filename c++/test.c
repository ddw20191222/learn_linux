#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>


int main(int argc, char * argv[])
{
	struct stat sb;
	stat(argv[1], &sb);
	return 0;
}
