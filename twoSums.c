#include <stdio.h>
#include <stdlib.h>

int sizeA(int arr[]) {
	int len = 0;
	for(int i = 0; arr[i]!='\0'; i++){
		len++;
	}
	return len;
}


void twoSum(int *nums, int target, int *buffer, int len){

	printf("Target is %d \n", target);
	printf("Length is %d \n", len);
	for (int x = 0; x <= len; x++){
		for (int y = 0; y <= len ; y++){
			if (nums[x] + nums[y] == target && nums[x] != nums[y]){
				buffer[0] = nums[x];
				buffer[1] = nums[y];
				return;

			}
		}
	}
}



int main(int argc, char *argv[]){
	if (argc < 3){
		printf("Wrong amount of args. Supply more than 2\n");
		exit(0);
	}

	int nums[16] = {0};
	int len;
	
	for (int x = 3; x <= argc; x++){
		nums[x - 3] = atoi(argv[x - 1]);
		len++;
	}

	for (int y = 0; y <= 16; y++){
		printf("Nums are ");
		printf("%d", nums[y]);
		printf("\n");
	}

	
	long rest = atoi(argv[1]);
	int returnBuffer[16] = {0};
	twoSum(nums, rest, returnBuffer, len);
	printf("Nums are %d, %d\n", returnBuffer[0], returnBuffer[1]);

}