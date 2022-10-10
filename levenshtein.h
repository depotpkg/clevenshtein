#ifndef LEVENSHTEIN_H_
#define LEVENSHTEIN_H_

/**
 * Calculate a Levenshtein distance between two strings.
 *
 * @param string1
 * @param string2
 * @param w: weight of "sWap" operation
 * @param s: weight of "Substitution" operation
 * @param a: weight of "Add" operation
 * @param d: weight of "Deletion" operation
 * @returns the weighted distance
 */
int levenshtein(
    const char* string1, const char* string2, int w, int s, int a, int d);

#endif  // LEVENSHTEIN_H_
