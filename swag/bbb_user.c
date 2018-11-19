#include "bbb_user.h"

int main(void) {

	int fhandler;
	int retWrite;
	char buff[BUFF_LEN];
	
	fhandler = open("/dev/BBB_dev", O_RDWR);

	if (fhandler < 0) {
		printf("Unable to open loadable kernel module BBB_dev. Closing program\n");
		return -1;
	}
	else {
		printf("LKM successfully opened\n");
	}

	while (1) {
		printf("Enter \"exit\" to exit or enter string to watch LED blink morse code: \n");
		scanf("%[^\n]%*c", buff);
		if (strcmp(buff, "exit") == 0) {
			break;
		}
		retWrite = write(fhandler, buff, strlen(buff));
		if (retWrite < 0) {
			printf("Unable to write the given string to the device driver BBB_dev\n");
			return -2;
		}

	}

	close(fhandler);

	return 0;
}
