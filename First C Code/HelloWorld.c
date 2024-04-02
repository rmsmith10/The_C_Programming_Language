#include <stdio.h>

int main(){

	int ipAddress[4] = {0,0,0,0};
	int ipValid = 1;
	int ipDisplay = 0;
	unsigned long long_ipAddress = 0;

	for(int i = 0; i < 4 && ipValid; ++i){
		printf("Enter IP Address #%d: ", i + 1);
		scanf("%d", &ipAddress[i]);
		if(ipAddress[i] >= 0 && ipAddress[i] <= 127)
			ipDisplay = 1;
		else{
			ipValid = 0;
			ipDisplay = 0;
			printf("\nIP ADDRESS INVALID!");
		}
	}

	if(ipDisplay){
		printf("\nIP Address: ");
		for(int i = 0; i < 4; ++i){
			printf("%d", ipAddress[i]);
		if(i < 3)
			printf(".");
		}
		long_ipAddress = ipAddress[0]*256*256*256+ipAddress[1]*256*256+ipAddress[2]*256+ipAddress[3];
		printf("\nLong IP Address: %lu", long_ipAddress);
	}


	return 0;

}
