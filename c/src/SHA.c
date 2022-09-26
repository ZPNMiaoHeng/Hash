#include <stdio.h>
#include <string.h>
#include "SHA1.h"

typedef union {                      //????
	unsigned char c[64];
	unsigned long l[16];
} CHAR64LONG16;

#define rol(value, bits) (((value) << (bits)) | ((value) >> (32 - (bits))))

/*   blk0()   and   blk()   perform   the   initial   expand.   */
/*   I   got   the   idea   of   expanding   during   the   round   function   from   SSLeay.   */
#ifdef LITTLE_ENDIAN
	#define blk0(i) (block->l[i] = (rol(block->l[i], 24) & 0xFF00FF00) | (rol(block->l[i], 8) & 0x00FF00FF))
#else
	#define blk0(i) block->l[i]
#endif

#define blk(i) (block->l[i & 15] = rol(block->l[(i + 13) & 15] ^ block->l[(i + 8) & 15] ^ block->l[(i + 2) & 15] ^ block->l[i & 15], 1))

/*   (R0+R1),   R2,   R3,   R4   are   the   different   operations   used   in   SHA1   */
#define R0(v, w, x, y, z, i)                                     \
	z += ((w & (x ^ y)) ^ y) + blk0(i) + 0x5A827999 + rol(v, 5); \
	w = rol(w, 30);

#define R1(v, w, x, y, z, i)                                    \
	z += ((w & (x ^ y)) ^ y) + blk(i) + 0x5A827999 + rol(v, 5); \
	w = rol(w, 30);

#define R2(v, w, x, y, z, i)                            \
	z += (w ^ x ^ y) + blk(i) + 0x6ED9EBA1 + rol(v, 5); \
	w = rol(w, 30);

#define R3(v, w, x, y, z, i)                                          \
	z += (((w | x) & y) | (w & x)) + blk(i) + 0x8F1BBCDC + rol(v, 5); \
	w = rol(w, 30);

#define R4(v, w, x, y, z, i)                            \
	z += (w ^ x ^ y) + blk(i) + 0xCA62C1D6 + rol(v, 5); \
	w = rol(w, 30);


static void SHA1Transform(unsigned long state[5], unsigned char buffer[64]);


/*   Hash   a   single   512-bit   block.   This   is   the   core   of   the   algorithm.   */
static void SHA1Transform(unsigned long state[5], unsigned char buffer[64])
{
	unsigned long a, b, c, d, e;
	CHAR64LONG16 *block;

#ifdef SHA1HANDSOFF
	static unsigned char workspace[64];
	block = (CHAR64LONG16 *)workspace;
	memcpy(block, buffer, 64);
#else
	block = (CHAR64LONG16 *)buffer;
#endif

	/*   Copy   context-> state[]   to   working   vars   */
	a = state[0];
	b = state[1];
	c = state[2];
	d = state[3];
	e = state[4];

	/* 完成的就是RFC文档中的H0～H4赋值给ABCDE的操作。接下来就是80轮运算的代码。每20轮为一组，共分四组 */
	/* 第一组比较特殊，使用了R0和R1两个宏函数，其原因前面已经介绍了。因为第0~15轮运算和16~79轮运算的时候消息块M(i)和字块W(i)的转换是不一样的。
  后面的20~39轮，40~59轮，60~79轮就是依次使用的R2，R3，R4来运算了 */
	/*   4   rounds   of   20   operations   each.   Loop   unrolled.   */
	R0(a, b, c, d, e, 0);
	R0(e, a, b, c, d, 1);
	R0(d, e, a, b, c, 2);
	R0(c, d, e, a, b, 3);

	R0(b, c, d, e, a, 4);
	R0(a, b, c, d, e, 5);
	R0(e, a, b, c, d, 6);
	R0(d, e, a, b, c, 7);

	R0(c, d, e, a, b, 8);
	R0(b, c, d, e, a, 9);
	R0(a, b, c, d, e, 10);
	R0(e, a, b, c, d, 11);

	R0(d, e, a, b, c, 12);
	R0(c, d, e, a, b, 13);
	R0(b, c, d, e, a, 14);
	R0(a, b, c, d, e, 15);

	R1(e, a, b, c, d, 16);
	R1(d, e, a, b, c, 17);
	R1(c, d, e, a, b, 18);
	R1(b, c, d, e, a, 19);

	R2(a, b, c, d, e, 20);
	R2(e, a, b, c, d, 21);
	R2(d, e, a, b, c, 22);
	R2(c, d, e, a, b, 23);

	R2(b, c, d, e, a, 24);
	R2(a, b, c, d, e, 25);
	R2(e, a, b, c, d, 26);
	R2(d, e, a, b, c, 27);

	R2(c, d, e, a, b, 28);
	R2(b, c, d, e, a, 29);
	R2(a, b, c, d, e, 30);
	R2(e, a, b, c, d, 31);

	R2(d, e, a, b, c, 32);
	R2(c, d, e, a, b, 33);
	R2(b, c, d, e, a, 34);
	R2(a, b, c, d, e, 35);

	R2(e, a, b, c, d, 36);
	R2(d, e, a, b, c, 37);
	R2(c, d, e, a, b, 38);
	R2(b, c, d, e, a, 39);

	R3(a, b, c, d, e, 40);
	R3(e, a, b, c, d, 41);
	R3(d, e, a, b, c, 42);
	R3(c, d, e, a, b, 43);

	R3(b, c, d, e, a, 44);
	R3(a, b, c, d, e, 45);
	R3(e, a, b, c, d, 46);
	R3(d, e, a, b, c, 47);

	R3(c, d, e, a, b, 48);
	R3(b, c, d, e, a, 49);
	R3(a, b, c, d, e, 50);
	R3(e, a, b, c, d, 51);

	R3(d, e, a, b, c, 52);
	R3(c, d, e, a, b, 53);
	R3(b, c, d, e, a, 54);
	R3(a, b, c, d, e, 55);

	R3(e, a, b, c, d, 56);
	R3(d, e, a, b, c, 57);
	R3(c, d, e, a, b, 58);
	R3(b, c, d, e, a, 59);

	R4(a, b, c, d, e, 60);
	R4(e, a, b, c, d, 61);
	R4(d, e, a, b, c, 62);
	R4(c, d, e, a, b, 63);

	R4(b, c, d, e, a, 64);
	R4(a, b, c, d, e, 65);
	R4(e, a, b, c, d, 66);
	R4(d, e, a, b, c, 67);

	R4(c, d, e, a, b, 68);
	R4(b, c, d, e, a, 69);
	R4(a, b, c, d, e, 70);
	R4(e, a, b, c, d, 71);

	R4(d, e, a, b, c, 72);
	R4(c, d, e, a, b, 73);
	R4(b, c, d, e, a, 74);
	R4(a, b, c, d, e, 75);

	R4(e, a, b, c, d, 76);
	R4(d, e, a, b, c, 77);
	R4(c, d, e, a, b, 78);
	R4(b, c, d, e, a, 79);

	/* 完成的就是更新缓冲区H0～H4的内容。然后把a～e清空为0 */
	/*   Add   the   working   vars   back   into   context.state[]   */
	state[0] += a;
	state[1] += b;
	state[2] += c;
	state[3] += d;
	state[4] += e;
	/*   Wipe   variables   */
	a = b = c = d = e = 0;
}

/*   SHA1Init   -   Initialize   new   context   */
void SHA1Init(SHA1_CTX *context)
{
	/*   SHA1   initialization   constants   */
	context->state[0] = 0x67452301;

	context->state[1] = 0xEFCDAB89;

	context->state[2] = 0x98BADCFE;

	context->state[3] = 0x10325476;

	context->state[4] = 0xC3D2E1F0;

	context->count[0] = context->count[1] = 0;          //
}

/*   Run   your   data   through   this.   */
void SHA1Update(SHA1_CTX *context, unsigned char *data, unsigned int len)
{
	unsigned int i, j;

	/*   j>>3获得的就是字节数，j = (j >> 3) & 63得到的就是低6位的值，也就是代表64个字节（512位）长度的消息。因为我们每次进行计算都是处理512位的消息数据。 */
	j = (context->count[0] >> 3) & 63; //2^7=64 -> 0b11_1111

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

/*   Add   padding   and   return   the   message   digest.   */
void SHA1Final(unsigned char digest[20], SHA1_CTX *context)
{
	unsigned long i, j;
	unsigned char finalcount[8];

	for (i = 0; i < 8; i++)
	{
		finalcount[i] = (unsigned char)((context->count[(i >= 4 ? 0 : 1)]
										 >> ((3 - (i & 3)) * 8)) &
										255); /*   Endian   independent   */
	}
	/* 填充的时候是以字节为单位的，最少1个字节，最多64个字节。并且第一位要填充1，后面都填充0。
  所以拿到一个消息我们首先要给他填充一个字节的10 000 000.SHA1Update() 函数就是完成的数据填充（附加）操作 */
	SHA1Update(context, (unsigned char *)"\200 ", 1);

	/* 循环测试数据模512是否与448同余。不满足条件就填充全一个字节0。 */
	/* 使用 while ((context->count[0] & 511) != 448) 貌似更合适。但是，504后三位全0,511后三位全1。
  context->count中存储的是消息的长度，它的单位是：位。前面我们提到了我们的数据是以字节来存储的，
  所以context->count[ ]中的数据肯定是8个倍数，所以后三位肯定是000。所以不管是000&000，还是000&111其结果都是0。 */
	while ((context->count[0] & 504) != 448)
	{
		SHA1Update(context, (unsigned char *)"\0 ", 1);
	}

	/* 这将触发SHA1Transform()函数的调用，该函数的功能就是进行运算，得出160位的消息摘要（message digest）并储存在context-state[ ]中，它是整个SHA-1算法的核心 */
	SHA1Update(context, finalcount, 8); /*   Should   cause   a   SHA1Transform()   */

	/* 最后的这步转换将消息摘要转换成单字节序列。用代码来解释就是：将context-state[5]中储存的20个字节（5×4字节）的消息摘要取出，将其存储在20个单字节的数组digest中。
  并且按大端序存储（与之前分析context->count[ ]到finalcount[ ]转换的思路相同） */
	for (i = 0; i < 20; i++)
	{
		digest[i] = (unsigned char)

			((context->state[i >> 2] >> ((3 - (i & 3)) * 8)) & 255);
	}

	/*   Wipe   variables   */
	i = j = 0;
	memset(context->buffer, 0, 64);
	memset(context->state, 0, 20);
	memset(context->count, 0, 8);
	memset(&finalcount, 0, 8);

#ifdef SHA1HANDSOFF /*   make   SHA1Transform   overwrite   it 's   own   static   vars   */
	SHA1Transform(context->state, context->buffer);
#endif
}
