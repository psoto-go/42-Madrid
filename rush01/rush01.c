/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amolina- <amolina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 18:47:51 by amolina-          #+#    #+#             */
/*   Updated: 2020/12/06 22:31:56 by amolina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	initial_steps1(char **argv, int tab[4][4], int *suprw);
void	initial_steps2(char **argv, int *infrw, int *lftcol, int *rgtcol);
int		error_control1a(char **argv);
int		error_control1b(char **argv);
int		error_control2a(int *srw, int *irw, int *lcol, int *rcol);
int		error_control2b(int *srw, int *irw, int *lcol, int *rcol);
int		error_control2c(int *lcol, int *rcol);
int		error_control3a(int *srw, int *lcol, int *rcol);
int		error_control3b(int *srw, int *irw, int *lcol, int *rcol);
int		error_control3c(int *irw, int *lcol, int *rcol);
int		error_control4a(int *lcol, int *rcol);
int		error_control4b(int *srw, int *irw);
int		error_control5a(int *lcol, int *rcol);
int		error_control5b(int *srw, int *irw);
void	print_matrix(int tab[4][4]);
void	cuatros1(int tab[4][4], int *srw, int *irw);
void	cuatros2(int tab[4][4], int *lcol, int *rcol);
void	cuatros3(int tab[4][4], int *srw, int *irw);
void	cuatros4(int tab[4][4], int *lcol, int *rcol);

int		main(int argc, char **argv)
{
	int suprw[4];
	int infrw[4];
	int lftcol[4];
	int rgtcol[4];
	int tab[4][4];

	initial_steps1(argv, tab, suprw);
	initial_steps2(argv, infrw, lftcol, rgtcol);
	if (error_control1a(argv) == 1 || error_control1b(argv) == 1 ||
			error_control2a(suprw, infrw, lftcol, rgtcol) == 1 ||
			error_control2b(suprw, infrw, lftcol, rgtcol) == 1 ||
			error_control2c(lftcol, rgtcol) == 1 ||
			error_control3a(suprw, lftcol, rgtcol) == 1 ||
			error_control3b(suprw, infrw, lftcol, rgtcol) == 1 ||
			error_control3c(infrw, lftcol, rgtcol) == 1 ||
			error_control4a(lftcol, rgtcol) == 1 ||
			error_control4b(suprw, infrw) == 1 ||
			error_control5a(lftcol, rgtcol) == 1 ||
			error_control5b(suprw, infrw) == 1)
		print_matrix(tab);
	cuatros1(tab, suprw, infrw);
	cuatros2(tab, lftcol, rgtcol);
	cuatros3(tab, suprw, infrw);
	cuatros4(tab, lftcol, rgtcol);
	return (argc);
}
