/*
 * toLowerCase.c
 *
 */

/* toLowerCase: convert c to lower case; ASCII only */
char toLowerCase(char c) {
	if (c >= 'A' && c <= 'Z') {
		return c + ('a' - 'A'); // 'a' - 'A' = 32
	} else {
		return c;
	}
}
