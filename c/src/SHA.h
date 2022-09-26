#ifndef SHA1_H
#define SHA1_H
// 
// #ifdef __cplusplus
// extern "C" {
// #endif
// 
// #define SHA1HANDSOFF
// #define LITTLE_ENDIAN

typedef struct
{
	unsigned long state[5];			//* 160(5×32)比特的消息摘要（即SHA-1算法要得出的)
	unsigned long count[2];			//* 储存消息的长度（单位：比特）64bit
	unsigned char buffer[64];		
	//* 512(64×8)比特（位）的消息块（由原始消息经处理得出）-> 四个buffer即 一个Wt
} SHA1_CTX;


// void SHA1Init(SHA1_CTX *context);
// 
// void SHA1Update(SHA1_CTX *context, unsigned char *data, unsigned int len);
// 
// void SHA1Final(unsigned char digest[20], SHA1_CTX *context);
// 
// #ifdef __cplusplus
// }
// #endif

#endif
