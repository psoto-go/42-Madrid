/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 21:32:30 by jparejo-          #+#    #+#             */
/*   Updated: 2020/12/16 21:55:07 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H

int			sizefile(int fd);
char		*readfile(int fd, int size);
int			openfile(char *file);
int			row_cmp(char *str);
int			cuentalong(char *str);
int			cuentafilas(char *str);
int			comparaenunciado(char *str, char *v);
int			repetido(char *c);
char		*caracteres(char *c);
int			numerofilas(char *c);
void		parameters(char *c);
char		**savebuffer(char *c, char **bf, int nu);
char		**deleteinfo(char *c, int r, int l);
int			**numbers(char *c, int **bf, int n, char *v);
int			**numbersmap(char *c, int r, int l, char *val);
int			minimum(int **c, int i, int j);
int			**maxsquare(int **c, int r, int l);
int			*solution(int **n, int r, int l);
int			**final(int **n, int *max);
void		writemap(int **n, int r, int l, char *val);

#endif
