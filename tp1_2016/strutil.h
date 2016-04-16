#ifndef STRUTIL_H
#define STRUTIL_H

#include <stddef.h>

/*
 * Devuelve una nueva cadena, allocada dinámicamente, con los primeros ‘n’
 * caracteres de la cadena ‘str’. El caller toma ownership de la cadena
 * devuelta.
 *
 * Devuelve NULL si no se pudo allocar memoria.
 */
char *substr(const char *str, size_t n);

/*
 * Devuelve en un arreglo dinámico terminado en NULL todos los subsegmentos de
 * ‘str’ separados por el carácter ‘sep’.
 *
 * Ejemplo:
 *
 *        char **strv = split("abc,def,ghi,jkl", ',');
 *
 * Devuelve:
 *
 *        {"abc", "def", "ghi", "jkl", NULL};
 *
 * Tanto ‘strv’ como las cadenas que contiene son allocadas dinámicamente.
 *
 * El caller toma ownership del vector devuelto, que podrá ser liberado con
 * free_strv(). La función devuelve NULL si falló alguna llamada a malloc().
 *
 * Nótese los siguientes casos bordes:
 *
 *        split("abc,,def", ',') → {"abc", "", "def", NULL};
 *        split("abc,def,", ',') → {"abc", "def", "", NULL};
 *        split(",abc,def", ',') → {"", "abc", "def", NULL};
 *
 *        split(",", ',') → {"", "", NULL};
 *        split("", ',')  → {"", NULL};
 */
char **split(const char *str, char sep);

/*
 * Devuelve una cadena, allocada dinámicamente, resultado de unir todas las
 * cadenas en el arreglo ‘strv’ (que es de longitud ‘len’).
 *
 * El caller toma ownership de la cadena devuelta. La función devuelve NULL
 * si no se pudo allocar memoria.
 */
char *join(const char *const strv[], char sep);

/*
 * Libera un arreglo dinámico de cadenas, y todas las cadenas que contiene.
 */
void free_strv(char *strv[]);

#endif  // STRUTIL_H
