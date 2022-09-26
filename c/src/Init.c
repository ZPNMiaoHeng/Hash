#include <stdio.h>
#include <string.h>
#include "SHA.h"

/*   SHA1Init   -   Initialize   new   context   */
void SHA1Init(SHA1_CTX *context)
{
	/*   SHA1   initialization   constants   */
	context->state[0] = 0x67452301;
	context->state[1] = 0xEFCDAB89;
	context->state[2] = 0x98BADCFE;
	context->state[3] = 0x10325476;
	context->state[4] = 0xC3D2E1F0;
	context->count[0] = 0;
  context->count[1] = 0;          //
}

void SHA1Update(SHA1_CTX *context, unsigned char *data, unsigned int len)
{
	unsigned int i, j;

	/*   j>>3获得的就是字节数，j = (j >> 3) & 63得到的就是低6位的值，也就是代表64个字节（512位）长度的消息。因为我们每次进行计算都是处理512位的消息数据。 */
	j = (context->count[0] >> 3) & 0b111111;

	/* context->count[ ]存储的是消息的长度，超出context->count[0]的存储范围的部分存储在context->count[1]中。
  len<<3就是len*8的意思，因为len的单位是字节，而context->count[ ]存储的长度的单位是位，所以要乘以8。 
  if ((context->count[0] += len << 3) < j) 的意思就是说如果加上len*8个位，context->count[0]溢出了，那么就要：context->count[1]++；进位。
	len<<3的单位是位，len>>29（len<<3 >>32）表示的就是len中要存储在context->count[1]中的部分。 */
	if ((context->count[0] += len << 3) < (len << 3))
		context->count[1]++;

	context->count[1] += (len >> 29);

	/* 如果j+len的长度大于63个字节，就分开处理，每64个字节处理一次，然后再处理后面的64个字节，重复这个过程；否则就直接将数据附加到buffer末尾 */
	if ((j + len) > 63)
	{
		memcpy(&context->buffer[j], data, (i = 64 - j));		/* i=64-j，然后从data中复制i个字节的数据附加到context->buffer[j]末尾，也就是说给buffer凑成了64个字节 */
		SHA1Transform(context->state, context->buffer);			/* 执行SHA1Transform()来开始一次消息摘要的计算 */
		/* 每64个字节处理一次 */
		for (; i + 63 < len; i += 64)
		{
			SHA1Transform(context->state, &data[i]);
		}
		j = 0;
	}
	else
	{
		i = 0;
	}

	/* 如果前面的if不成立，那么也就是说原始数据context->buffer加上新的数据data的长度还不足以凑成64个字节，所以直接附加上data就行了。
  相当于：memcpy(&context->buffer[j], &data[i], 0);
	如果前面的if成立，那么j是等于0的，而 i 所指向的偏移位置是 (└ len/64┘×64,len)之间。 └   ┘表示向下取整。*/

	memcpy(&context->buffer[j], &data[i], len - i);
}