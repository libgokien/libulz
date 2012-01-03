#include "../../include/strlib.h"

// it is in the responsibility of the called to deliver a buffer of suitable length.
char* uint64ToString(uint64_t number, char* buffer) {
	if (!buffer) return NULL;
	return numberToString((int64_t) number, 10, buffer, 0, 0);
}