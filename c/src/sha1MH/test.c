#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "SHA1.h"

#define TEST1 "abc"
/*
#define TEST2a "abcdbcdecdefdefgefghfghighijhi"

#define TEST2b "jkijkljklmklmnlmnomnopnopq"
#define TEST2 TEST2a TEST2b
#define TEST3 "a"
#define TEST4a "01234567012345670123456701234567"
#define TEST4b "01234567012345670123456701234567"

#define TEST4 TEST4a TEST4b
*/
char *testarray[4] =
{
	TEST1
};

long int repeatcount[4] = { 1 };

int main()
{
	SHA1Context sha;
	int i, j, err;
	uint8_t Message_Digest[20];
	/*
	* Perform SHA-1 tests
	*/
	for(j = 0; j < 4; ++j)
	{
		printf( "\nTest %d: repeatCount is %ld,\tdata is '%s',\tlen is %lx\n", j+1, 
      repeatcount[j], testarray[j], strlen(testarray[j]));
		err = SHA1Reset(&sha);
		for(i = 0; i < repeatcount[j]; ++i)
		{
			err = SHA1Input(&sha,
				(const unsigned char *) testarray[j],
				strlen(testarray[j]));
			if (err)
			{
				fprintf(stderr, "SHA1Input Error %d.\n", err );
				break; /* out of for i loop */
			}
		}
		err = SHA1Result(&sha, Message_Digest);
		if (err)
		{
			fprintf(stderr,
				"SHA1Result Error %d, could not compute message digest.\n",
				err );
		}
		else
		{
			printf("\t");
			for(i = 0; i < 20 ; ++i)
			{
				printf("%02X ", Message_Digest[i]);
			}
			printf("\n");
      return 0;
		}
	}

	/* Test some error returns */
/*
	err = SHA1Input(&sha,(const unsigned char *) testarray[1], 1);
	printf ("\nError %d. Should be %d.\n", err, shaStateError );
	err = SHA1Reset(0);
	printf ("\nError %d. Should be %d.\n", err, shaNull );
*/
	return 0;
}