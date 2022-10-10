#ifndef LEVENSHTEIN_H_
#define LEVENSHTEIN_H_

#if !defined(CLEV_API)
#if defined(CLEV_DLL)
#if defined(_MSC_VER)
#if CLEV_IMPLEMENTATION
#define CLEV_API __declspec(dllexport)
#else
#define CLEV_API __declspec(dllimport)
#endif  // CLEV_IMPLEMENTATION
#else
#define CLEV_API __attribute__((visibility("default")))
#endif  // defined(_MSC_VER)
#else
#define CLEV_API
#endif  // defined(CLEV_DLL)
#endif  // !defined(CLEV_API)

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
CLEV_API int levenshtein(
    const char* string1, const char* string2, int w, int s, int a, int d);

#endif  // LEVENSHTEIN_H_
