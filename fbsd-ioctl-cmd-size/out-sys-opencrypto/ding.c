
#include <sys/types.h>
#include <sys/param.h>
#include <sys/lock.h>
#include <sys/mutex.h>
#include <sys/rwlock.h>
#include "ding.h"

int
main(int argc, char **argv)
{
	printf("macro,type,size,file,line\n");

	// CIOCASYMFEAT 12.1src/sys/opencrypto/cryptodev.h:345
	 printf("CIOCASYMFEAT,u_int32_t,%zu,12.1src/sys/opencrypto/cryptodev.h,345\n", sizeof(u_int32_t));
	// CIOCCRYPT 12.1src/sys/opencrypto/cryptodev.h:343
	 printf("CIOCCRYPT,struct crypt_op,%zu,12.1src/sys/opencrypto/cryptodev.h,343\n", sizeof(struct crypt_op));
	// CIOCCRYPTAEAD 12.1src/sys/opencrypto/cryptodev.h:349
	 printf("CIOCCRYPTAEAD,struct crypt_aead,%zu,12.1src/sys/opencrypto/cryptodev.h,349\n", sizeof(struct crypt_aead));
	// CIOCFINDDEV 12.1src/sys/opencrypto/cryptodev.h:348
	 printf("CIOCFINDDEV,struct crypt_find_op,%zu,12.1src/sys/opencrypto/cryptodev.h,348\n", sizeof(struct crypt_find_op));
	// CIOCFSESSION 12.1src/sys/opencrypto/cryptodev.h:342
	 printf("CIOCFSESSION,u_int32_t,%zu,12.1src/sys/opencrypto/cryptodev.h,342\n", sizeof(u_int32_t));
	// CIOCGSESSION 12.1src/sys/opencrypto/cryptodev.h:341
	 printf("CIOCGSESSION,struct session_op,%zu,12.1src/sys/opencrypto/cryptodev.h,341\n", sizeof(struct session_op));
	// CIOCGSESSION2 12.1src/sys/opencrypto/cryptodev.h:346
	 printf("CIOCGSESSION2,struct session2_op,%zu,12.1src/sys/opencrypto/cryptodev.h,346\n", sizeof(struct session2_op));
	// CIOCKEY 12.1src/sys/opencrypto/cryptodev.h:344
	 printf("CIOCKEY,struct crypt_kop,%zu,12.1src/sys/opencrypto/cryptodev.h,344\n", sizeof(struct crypt_kop));
	// CIOCKEY2 12.1src/sys/opencrypto/cryptodev.h:347
	 printf("CIOCKEY2,struct crypt_kop,%zu,12.1src/sys/opencrypto/cryptodev.h,347\n", sizeof(struct crypt_kop));
	// CRIOGET 12.1src/sys/opencrypto/cryptodev.h:336
	 printf("CRIOGET,u_int32_t,%zu,12.1src/sys/opencrypto/cryptodev.h,336\n", sizeof(u_int32_t));

	return (0);
}
