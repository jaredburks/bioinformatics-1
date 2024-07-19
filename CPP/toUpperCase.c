/*
 * toUpperCase.c
 */

/* toUpperCase: convert c to upper case; ASCII only */
char toUpperCase(char c) {
	if (c >= 'a' && c <= 'z') {
		return c - ('a' - 'A'); // 'a' - 'A' = 32
	} else {
		return c;
	}
}
