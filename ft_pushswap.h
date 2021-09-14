/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbrillai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:26:22 by qbrillai          #+#    #+#             */
/*   Updated: 2021/09/14 11:51:33 by qbrillai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H

# include "libft/libft.h"

typedef struct s_param
{
	long long	*a;
	long long	*b;
	long long	*c;
	int			stopa;
	int			stopb;
	int			small;
	int			smallpos;
	int			big;
	int			bigbit;
	int			nb;
	int			i;
	int			j;
	int			max;
	long long	*temp;
	int			minus;
}		t_param;

int		main(int ac, char **av);
int		ft_errors(char **av, t_param *param);
void	ft_sa(t_param *param, int sw);
void	ft_sb(t_param *param, int sw);
void	ft_ss(t_param *param);
void	ft_pa(t_param *param);
void	ft_pb(t_param *param);
void	ft_ra(t_param *param, int sw);
void	ft_rb(t_param *param, int sw);
void	ft_rr(t_param *param);
void	ft_rra(t_param *param, int sw);
void	ft_rrb(t_param *param, int sw);
void	ft_rrr(t_param *param);
int		ft_pick(t_param *param);
int		ft_small(t_param *param);
void	ft_sort4(t_param *param);
void	ft_sort3(t_param *param);
void	ft_sort5(t_param *param);
int		ft_init(int ac, t_param *param, char **av);
void	ft_big(t_param *param);
void	ft_compare(t_param *param);
int		ft_atoi2(char *str, t_param *param);
int		ft_inorder(t_param *param);
int		ft_errorsb(char **av, t_param *param);
int		ft_delete(char **av);
int		ft_space(char **av);
int		ft_checktype(char **av);

#endif
