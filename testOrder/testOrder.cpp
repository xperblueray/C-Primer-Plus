#include <stdio.h>
#include <netinet.h>
int main(int argc, char** argv)
{
	int num = 0x12345678;
	unsigned char* pc = (unsigned char*)(&num);
	printf("local order: \n");
	printf("[0]: 0x%X addr:%u\n", pc[0], &pc[0]);
	printf("[1]: 0x%X addr:%u\n", pc[1], &pc[1]);
	printf("[2]: 0x%X addr:%u\n", pc[2], &pc[2]);
	printf("[3]: 0x%X addr:%u\n", pc[3], &pc[3]);
	num = htonl(num);
	printf("htonl order: \n");

	printf("[0]: 0x%X addr:%u\n", pc[0], &pc[0]);
	printf("[2]: 0x%X addr:%u\n", pc[1], &pc[1]);
	printf("[2]: 0x%X addr:%u\n", pc[2], &pc[2]);
	printf("[3]: 0x%X addr:%u\n", pc[3], &pc[3]);
}