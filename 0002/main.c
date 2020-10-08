#include <stdio.h>
#include <stdint.h>

union floatData 
{
	uint8_t byteData[4];
	float floatValue;
};

union doubleData
{
	uint8_t byteData[8];
	double doubleValue;
};

int main()
{
	// Change hex to float
	union floatData fd;
	char hexFloatValue[] = {0x33, 0x33, 0x33, 0x3f}; // 0x3333333f=0.7 (Little Endian)
	printf("Float number 0.7 in hex: ");
	for (int i = 0; i < 4; i++) {
		printf("%x", hexFloatValue[i]);
	}
	printf("\n");
	for (int i = 0; i < 4; i++) {
		fd.byteData[i] = hexFloatValue[i];
	}
	printf("%f \n", fd.floatValue);

	// Change float to hex
	fd.floatValue = 0.2;
	printf("now we have float number: %f \n", fd.floatValue);
	printf("the hex of float number %f is :", fd.floatValue);
	for (int i = 0; i < 4; i++) {
		printf("%x", fd.byteData[i]);
	}
	printf("\n");

	// Change hex to double
	union doubleData dd;
	char hexDoubleValue[] = {0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0xe6, 0x3f};
	printf("Double number 0.7 in hex: ");
	for (int i = 0; i < 8; i++) {
		printf("%x", hexDoubleValue[i]);
	}
	printf("\n");
	for (int i = 0; i < 8; i++) {
		dd.byteData[i] = hexDoubleValue[i];
	}
	printf("%f \n", dd.doubleValue);


	return 0;
}